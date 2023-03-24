//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include<stdio.h>
int main()
{
	int r,i,bin=0,pr=1;
	printf("Enter a number in decimal: ");
	scanf("%d",&i);
	while(i!=0)
	{
		r=i%2;
		bin=bin+(pr*r);
		pr=pr*10;
		i=i/2;
	}
	printf("Binary of the number is: %d",bin);
}
