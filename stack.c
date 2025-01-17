#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int push(struct node **t_ptr,int data)
{
	 struct node *temp;
	 temp = (struct node*)malloc(sizeof(struct node));
	 if(temp == NULL)
	 {
	 	return 0;
	 }
	 else {
	 	temp->data = data;
	 	temp->next = *t_ptr;
	 	*t_ptr = temp;
	 	return 1;
	 }
}
struct node *pop(struct node **t_ptr)
{
	struct node *temp;
	if(*t_ptr == NULL)
	{
		return NULL;
	}
	else
	{
		temp = *t_ptr;
		*t_ptr = temp->next;
		return(temp);
	}

}
int main()
{
	struct node *top = NULL;
	struct node *ret_node;
	int ret_val;
	int choice;
	while(1)
	{
	
	printf("1. Push\n");
    printf("2. Pop\n"); 
	          printf("3. exit\n"); 

    printf("Enter your choice: ");
    scanf("%d", &choice);
	switch (choice) 
	{
		case 1:
				printf("Enter data to push: ");
                int data;
                scanf("%d", &data);
                ret_val = push(&top, data);
				ret_val = push(&top,data);
				if(ret_val == 0)
				{
					printf("\ndata could not push or stack overfloaw");
				}
				else
				{
					printf("\ndata pushed sucessfully");
				}
				break;
        case 2:
            	ret_node = pop(&top);
				if(ret_node == NULL)
				{
					printf("Stack is Empty");
				}
				else
				{
					printf("popped data = %d",ret_node->data);
					free(ret_node);
				}
				break;
		case 3:
			printf("Exiting the program.\n");
                exit(0);
		default:
                printf("Invalid choice. Please try again.\n");	
	}
}
}

