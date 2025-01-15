


#include<stdio.h>
int main()
{
	int a[100],i,n,j;
 	printf("enter the no. of elements:");
 	scanf("%d",&n);
 	printf("\n enter the elements in sorted manner (ascendin or descendin):\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 
	 int target;
	 printf(" \n searching element:");
	 scanf("%d",&target);
	 
	int low=0;
	 int high=n-1;
	 
while(low<=high)
	 {
	 	int mid=(low+high)/2;
	 		if(a[mid]==target)
	 		{
	 		printf(" target is at :%d",mid);
	 		break;
			 }
			 else if(target<a[mid])
{
	low=0;
	high=mid-1;
		}
		else if(target>a[mid]){
			low=mid+1;
			high=n-1;
		}
		else
		{
			printf("no data found..");
				}		
		 }
		 
	 }

	
