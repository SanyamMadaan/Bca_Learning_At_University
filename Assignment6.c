//Write a C code to find the number of distinct elements in a sorted array.

#include<stdio.h>
int main()
{
	int ary[100];
	int i,n,dkt[100],smaller,fl,j,t=0,flag=1;
	printf("Enter number of Elements to enter: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&ary[i]);
	}
	for(i=0;i<n;i++)
	{
		smaller=ary[i];
	    for(j=i;j<n;j++)
		{
			if(ary[j]<=smaller)
			{
 smaller=ary[j];
			 fl=j;
			}
		}
		for(j=fl;j>=i;j--)
		{
			ary[j]=ary[j-1];
		}
		ary[i]=smaller;	
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ary[i]);
	}
    dkt[t]=ary[0];
	for(i=1;i<n;i++)
	{
		for(j=0;j<=t;j++)
   if(ary[i]==dkt[j])
		   {
		   	 flag=0;
		   	  break;
		   }
		   else
		   {
		   	flag=1;
		   }
		}
		if(flag==1)
		{
			dkt[t+1]=ary[i];
			t++;
		
	}
	printf("\nNumber of distinct Elements are:%d",++t);
}
