#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createnode()
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    return ptr;
}

struct node* initnode(struct node* ptr)
{
	int val;
	printf("Enter the data:");
	scanf("%d",&val);
    ptr->data = val;
    ptr->next = NULL;
    return ptr;
}

void insertatfirst(struct node** head)
{
    struct node* ptr = createnode();
    initnode(ptr);
    ptr->next = *head;
    *head = ptr;
}

struct node* insertatmiddle(struct node **head)
{
	int value;
    printf("Enter the data to add after value:");
    scanf("%d", &value);
	struct node *nnode;
    struct node* crnode = createnode();
    initnode(crnode);
    if(*head==NULL)
    {
    	return 0;
	}
	else
	{
		crnode=*head;
		while(crnode!=NULL)
		{
			if(crnode->data==value)
			{
				nnode->next=crnode->next;
				crnode->next=nnode;
				return crnode->data;
			}
			crnode=crnode->next;
		}
		return 0;
	}
}

struct node* insertatend(struct node* head)
{
    struct node* ptr = createnode();
    initnode(ptr);
    struct node* p = head;
    while (p->next != NULL)
	{
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

void detachatbegin(struct node** head)
{
 	   struct node *fnode;
 	   if(*head==NULL)
 	   {
 	   	return NULL;
	   }
	   else
	   {
	   	fnode=*head;
		*head=fnode->next;
		return (fnode);
	   }
}

void linkedlisttraverse(struct node* head)
{
    struct node* temp = head;
    while (temp != NULL)
	{
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
struct node *detachatend(struct node **head)
{
	struct node *fnode;
	struct node *last;
	struct node *previous;
	struct node *crnode;
	if(*head==NULL)
	{
		return NULL;
	}
	else
	{
		fnode=*head;
		crnode=fnode;
		while(crnode->next!=NULL)
		{
			crnode=crnode->next;
		}
		last=crnode;
		crnode=fnode;
		while(crnode->next!=last)
		{
			crnode=crnode->next;
		}
		previous=crnode;
		previous->next=NULL;
		return last;
	}
}

int main() {
    struct node* head = NULL;
    struct node* first;
    struct node* second;
    struct node* third;


    first = createnode();
    second = createnode();
    third = createnode();


    initnode(first);
    initnode(second);
    initnode(third);

    head = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    printf("Linked list before insertion operation:\n");
    linkedlisttraverse(head);
    printf("\n");

	int data,index;
	struct node* prevnode;
	while(1)
	{
    printf("\n1.Attach at the beginning\n");
    printf("2. Attach in the middle\n");
    printf("3. Attach at the end\n");
    printf("4. Detach at Begin\n");
	printf("5. Detach from End\n");
	printf("6. exit.\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

	if(choice>=6)
	{
		break;
	}

    switch (choice) {
        case 1:
            insertatfirst(&head);
            linkedlisttraverse(head);
            break;
        case 2:
            insertatmiddle(&head);
            linkedlisttraverse(head);
            break;
        case 3:
            insertatend(head);
            linkedlisttraverse(head);
            break;
        case 4:
        	detachatbegin(&head);
        	linkedlisttraverse(head);
            break;
        case 5:
        	detachatend(&head);
        	linkedlisttraverse(head);
        	 break;
        default:
            printf("Invalid choice!\n");
    }
 }
 return 0;
}
