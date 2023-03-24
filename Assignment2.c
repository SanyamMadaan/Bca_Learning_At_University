//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

#include<stdio.h>
int main()
{
	int i,count=0;
	printf("Enter a number: ");
	scanf("%d",&i);
	while(i%8==0)
	{
		scanf("%d",&i);
		count=count+1;
	}
	printf("Total no. divisible by 8 are: %d",count);
}

