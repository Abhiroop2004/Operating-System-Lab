#include <stdio.h>

int buffer_size = 0, max_size;

void producer() 
{
    if (buffer_size < max_size) 
    {
        buffer_size++;
        printf("Produced!\n");
        return;
    }
    printf("Buffer is full!\n");
}

void consumer() {
    if (buffer_size > 0) 
    {
        buffer_size--;
        printf("Consumed!\n");
        return;
    } 
    printf("Buffer is empty!\n");
    
}

int main() 
{
    int choice;
    
    printf("Abhiroop Sarkar! 👨‍💻\n");
    printf("Roll: 2, Enrollment: 12022002016041\n");
    
    printf("Enter max size of buffer: ");
    scanf("%d", &max_size);
    
    printf("Enter 1 for producer\n");
    printf("Enter 2 for consumer\n");
    printf("Enter 3 to exit\n");

    while(1)
    {
        printf("Enter choice:\t");
        scanf("%d", &choice);
        
        if (choice==1) producer();
        else if (choice==2) consumer();
        else if (choice==3) {
            printf("Exiting...");
            break;}
        else printf("Invalid choice!");
        printf("Buffer size = %d\n", buffer_size);
    };
}
