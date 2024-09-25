#include <stdio.h>
#include <unistd.h>

int semaphore = 1; 

// Wait operation (P)
void wait() {
    while (semaphore <= 0);  
    semaphore = 0;          
}

// Signal operation (V)
void signal() {
    semaphore = 1;           
}

void critical_section(int process) {
    printf("Process %d is in the critical section\n", process);
    sleep(2);
    printf("Process %d is leaving the critical section\n", process);
}

int main() 
{
    printf("Process 1 trying to enter the critical section...\n");
    wait(); 
    critical_section(1);
    signal(); 

    printf("Process 2 trying to enter the critical section...\n");
    wait(); 
    critical_section(2);
    signal();

    return 0;
}
