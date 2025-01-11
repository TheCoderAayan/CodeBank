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
	 	for(j=i+1;j<n;j++)
	 	{
	 	if(a[i]!=a[j])
		 {
		 
	 		if(a[j]<a[i])
	 		{
	 			int temp=a[j];
	 			a[j]=a[i];
	 			a[i]=temp;
			 }
		}
		 }
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 
}
