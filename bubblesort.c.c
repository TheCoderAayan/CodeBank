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
	 
	 
	 printf(" \nsorted array is:");
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1-i;j++)
	 	{
	 	
		 
		 
	 		if(a[j+1]<a[j])
	 		{
	 			int temp=a[j+1];
	 			a[j+1]=a[j];
	 			a[j]=temp;
			 }
		
		 }
		 
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("\n%d",a[i]);
	 }
	 
}
