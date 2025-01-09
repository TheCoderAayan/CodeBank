#include<stdio.h>
#include<math.h>
int avg(int a[],int n)
{
	float sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum/n;
}
 
 int var(int a[],int n,int avg)
 {
 	int i;
	 float var=0;
 	for(i=0;i<n;i++)
 	{
 		var=var+((a[i]-(avg))*(a[i]-(avg)));
	 }
	 return var/n;
 }


int main()
{
	int n,i,a[100];
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	printf("\nEnter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	float average=avg(a,n);
	float variance=var(a,n,average);
	float std=sqrt(variance);
	printf("\navg:%f",average);
	printf("\nvariance:%f",variance);
	printf("\nstd:%f",std); 
	
}
// gcc -o sd sd.c -lm
