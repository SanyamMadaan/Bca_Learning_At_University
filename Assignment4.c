//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include<stdio.h>
int main()
{
	int mtr[3][3];
	int r,c,max[3],temp;
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			scanf("%d",&mtr[r][c]);
		}
	}
	printf("\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			printf("%d ",mtr[r][c]);
		}
		printf("\n");
	}
	printf("\n");
	for(r=0;r<=2;r++)
{
		temp=mtr[r][0];
		for(c=1;c<=2;c++)
		{
			if(mtr[r][c]>temp)
			{
				temp=mtr[r][c];
			}
		}
		max[r]=temp;
	}
	printf("\n");
	for(r=0;r<=2;r++)
	{
		printf(" max element in each row %d\n",max[r]);
    }
}
