#include <stdio.h>
#include <stdlib.h>
void shiftDown(int list[],int pos,int lpos)
{
	int curpos=lpos;
	
	while(curpos >= pos)
	{
		list[curpos + 1] = list[curpos];
		curpos --;
	}
}

int insert(int list[],int pos,int data,int size,int *lpos)
{
	if(*lpos == -1)
	{
		if(pos == 0)
		{
			list[pos]=data;
			(*lpos)++;
		}
		
		else
		{
			return 0;
		}
	}
	
	else
	{
		if(*lpos < size-1)
		{
			if(pos == *lpos+1 )
			{
				list[pos] = data;
				(*lpos)++;
			}
			
			else 
			{
				if(pos <= *lpos )
				{
					shiftDown(list,pos,*lpos);
					list[pos] = data;
					(*lpos)++;
					
				}
				
				else
				{
					return 0;
				}
				
			}
			
			
		}
		
		else 
		{
			return 0;
		}
	}
	
}
void traverse(int ar[],int lpos)
{
	int cur_pos;
	
	if(lpos!=0)
	{
		cur_pos=0;
		while(cur_pos<=lpos)
		{
			printf("%d\t",ar[cur_pos]);
			cur_pos++;
		}
	}
}
int main(void)
{
    int i, n, index, arr[10];
    int choice;
    int list[100]={10,20,30,60};
	int lpos=3;
	int size=100;
	int pos;
	int listar[5]={10,28,3,66,51};
	int last=4;
    printf("1. insert\n");
    printf("2. delete\n");
    printf("3. traverse\n");       
    printf("Enter your choice: ");
    scanf("%d", &choice);
	switch (choice) 
	{
		case 1:
			printf("\n Enter the Index do you want to store the data : ");
			scanf("%d",&pos);
			
			int data;
			printf("\n Enter the data : ");
			scanf("%d",&data);
			int in=insert(list, pos, data, size, &lpos);
			
			if(in == 0)
			{
				printf("\n We can't store the Data at %d position",pos);
			}
			else
			{
				int i;
				printf("\n The Updated List : ");
				for(i = 0;i <= lpos;i++)
				{
					printf("\n List[%d]=%d",i,list[i]);
				}
			}
			break;
			
		case 2:
			printf("Enter the size of the array: ");
			scanf("%d", &n);
			printf("Enter the elements of the array: \n");
			for (i = 0; i < n; i++)
			{
				printf("arr[%d] = ", i);
				scanf("%d", &arr[i]);
			}
			printf("Enter the index of the element to be deleted: ");
			scanf("%d", &index);
			if (index >= n+1)  
			{  
				printf (" \n Deletion is not possible in the array.");  
			}  
			else  
			{  
				for (i = index; i < n - 1; i++)
				    arr[i] = arr[i + 1];
				    printf("The array after deleting the element is: ");
				for (i = 0; i < n - 1; i++)
				    printf("%d ", arr[i]);
				
			}
			break;
			
		case 3:
			traverse(listar,last);
			break;
		
	}
	
}
