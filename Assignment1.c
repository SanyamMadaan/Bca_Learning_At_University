//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include<stdio.h>
int main()
{
	int i,positive=0,negative=0,n,k;
	printf("Enter a number of inputs: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		if(k>0)
		{
			positive=positive+1;
		}
		else
		{
			negative=negative+1;
		}
	}
	printf("Number of positive number are: %d\n",positive);
	printf("Number of negative number are: %d",negative);
}
