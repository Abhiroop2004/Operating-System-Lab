#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <pthread.h>

sem_t semaphore;

void critical_section(int process) 
{
    printf("Process %d is in the critical section\n", process);
    sleep(2); // simulate critical section
    printf("Process %d is leaving the critical section\n", process);
}

void* process_execution(void* arg) 
{
    int process = *(int*)arg;

    printf("Process %d is trying to enter the critical section...\n", process);
    sem_wait(&semaphore); // Wait operation
    critical_section(process);
    sem_post(&semaphore); // Signal operation
}

int main() {
    int n, max_concurrent;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the maximum number of processes allowed in the critical section at the same time: ");
    scanf("%d", &max_concurrent);

    sem_init(&semaphore, 0, max_concurrent); // counting semaphore

    pthread_t threads[n];
    int process_ids[n];

    for (int i = 0; i < n; i++) 
    {
        process_ids[i] = i + 1;
        if (pthread_create(&threads[i], NULL, process_execution, &process_ids[i]) != 0) // Create threads for each process
        {
            perror("Failed to create thread");
            return 1;
        }
    }

    // Wait for all threads to complete
    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }

    sem_destroy(&semaphore); // destroy the semaphore

    printf("All processes have completed their execution.\n");
    return 0;
}
