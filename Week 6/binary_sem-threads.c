#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <pthread.h>

sem_t semaphore;

void critical_section(int process) {
    printf("Process %d is in the critical section\n", process);
    sleep(2); // simulate critical section
    printf("Process %d is leaving the critical section\n", process);
}

void* process_execution(void* arg) {
    int process = *(int*)arg;

    printf("Process %d is trying to enter the critical section...\n", process);
    sem_wait(&semaphore); // Wait operation
    critical_section(process);
    sem_post(&semaphore); // Signal operation
}

int main() 
{
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    sem_init(&semaphore, 0, 1); // binary semaphore

    pthread_t threads[n]; // n threads for n processes
    int process_ids[n]; // process ID

    for (int i = 0; i < n; i++) 
    {
        process_ids[i] = i + 1;
        pthread_create(&threads[i], NULL, process_execution, &process_ids[i]); // executing processes on different threads
        /*if (pthread_create(&threads[i], NULL, process_execution, &process_ids[i]) != 0) {
            perror("Failed to create thread");
            return 1;
        }*/
    }

    // Wait for all threads to complete
    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }

    sem_destroy(&semaphore); // destroy the semaphore

    printf("All processes have completed their execution.\n");
    return 0;
}
