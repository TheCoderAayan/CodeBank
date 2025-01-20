#include <stdio.h>
int cirenqueue(int *rear, int size, int queue[], int data);
int cirdequeue(int queue[], int *front, int *rear, int *retval);

int main() {
    int queue[5];
    int front = 0, rear = 0;
    int retval,i;
    
    printf("Enter elements in queue (up to 4 elements):\n");
    for ( i = 1; i < 5; i++) 
    {
        int data;
        scanf("%d", &data);
        if (cirenqueue(&rear, 5, queue, data) == 0) 
        {
            printf("Queue is full. Could not enqueue %d\n", data);
            break;
        } 
        else 
        {
            printf("Data %d entered in queue.\n", data);
        }
    }

    // Dequeue an element
    if (cirdequeue(queue, &front, &rear, &retval) == 0) 
    {
        printf("Queue is empty.\n");
    } 
    else 
    {
        printf("Dequeued element is %d\n", retval);
    }

    return 0;
}

int cirenqueue(int *rear, int size, int queue[], int data) 
{
    if ((*rear + 1) % size == 0) 
    { 
        return 0; 
    } 
    else 
    {
        queue[*rear] = data; 
        *rear = (*rear + 1) % 5; 
        return 1; 
    }
}

int cirdequeue(int queue[], int *front, int *rear, int *retval) 
{
    if (*front == *rear) 
    {
        return 0; 
    } 
    else 
    {
        *retval = queue[*front]; 
        *front = (*front + 1) % 5; 
        return 1; 
    }
}
