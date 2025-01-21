#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};

int circularenqueue(struct node **front, struct node **rear, int data);
struct node *circulardequeue(struct node **fr, struct node **rr);

int main() 
{
    struct node *front = NULL;
    struct node *rear = NULL;
    struct node *retnode;
    int status, i;

    struct node *fnode = (struct node *)malloc(sizeof(struct node));
    struct node *snode = (struct node *)malloc(sizeof(struct node));
    struct node *tnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for first node: ");
    scanf("%d", &fnode->data);
    fnode->next = snode;

    printf("Enter data for second node: ");
    scanf("%d", &snode->data);
    snode->next = tnode;

    printf("Enter data for third node: ");
    scanf("%d", &tnode->data);
    tnode->next = fnode; 

    struct node *current = fnode;

    for (i = 0; i < 3; i++) 
    {
        status = circularenqueue(&front, &rear, current->data);
        if (status == 1) 
        {
            printf("Data %d enqueued successfully.\n", current->data);
        } 
        else 
        {
            printf("Queue is full.\n");
        }
        current = current->next;
    }

    retnode = circulardequeue(&front, &rear);
    if (retnode == NULL) 
    {
        printf("Queue is empty.\n");
    } 
    else 
    {
        printf("Dequeued data is %d\n", retnode->data);
        free(retnode);
    }
    while (front != NULL) 
    {
        retnode = circulardequeue(&front, &rear);
        if (retnode != NULL) 
        {
            printf("Dequeued data is %d\n", retnode->data);
            free(retnode);
        }
    }

    return 0;
}

int circularenqueue(struct node **front, struct node **rear, int data) 
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) 
    {
        return 0; 
    }

    temp->data = data;

    if (*rear == NULL) 
    {
        *front = temp;
        *rear = temp;
        temp->next = temp; 
    } 
    else 
    {
        (*rear)->next = temp;
        temp->next = *front;
        *rear = temp;
    }

    return 1;
}

struct node *circulardequeue(struct node **fr, struct node **rr) 
{
    if (*fr == NULL) 
    {
        return NULL; 
    } 
    else 
    {
        struct node *temp = *fr;
        if (*fr == *rr) 
        {
            *fr = NULL;
            *rr = NULL;
        } 
        else 
        {
            *fr = (*fr)->next;
            (*rr)->next = *fr;
        }
        return temp;
    }
}
