#include <stdio.h>

int main()
{
    int n,k,i,a[10];
	printf("Enter the no. of elements");
	scanf("%d",&n);
	printf("Enter the key position");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	if(i==(k-1))
	{
	printf("The element in the %d position is: %d",i+1,a[i]);
	}
	}
    return 0;
}
