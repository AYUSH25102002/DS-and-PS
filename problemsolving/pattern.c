#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter no of rows that u want to print");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=n;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
