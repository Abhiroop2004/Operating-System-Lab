#include <stdio.h>
#include <unistd.h>

int semaphore = 2;

// Wait operation (P)
void wait() {
    while (semaphore <= 0);  
    semaphore--;     
}

// Signal operation (V)
void signal() {
    semaphore++;           
}

void critical_section(int process) {
    printf("Process %d is in the critical section\n", process);
    sleep(2);
    printf("Process %d is leaving the critical section\n", process);
}

int main() {
    int i;
    for (i=0; i<=3; i++)
    {
        printf("Process %d trying to enter the critical section...\n", i+1);
        wait(); // Process waits for resource
        critical_section(i+1);
        signal(); // Process releases the resource
    }
    return 0;
}
