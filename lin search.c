#include<stdio.h>
int main()
{
	int a[100],i,n,j;
 	printf("enter the no. of elements:");
 	scanf("%d",&n);
 	printf("\n enter the elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 
	 int target;
	 printf(" \n searching element:");
	 scanf("%d",&target);
	 for(i=0;i<n;i++)
	 {
	 	
	 		if(a[i]==target)
	 		{
	 		printf(" target is at :%d position.",i+1);
			 }
		
		 }
		 
	 }

	
