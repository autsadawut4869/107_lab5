#include <stdio.h>

int main()
{
	int num,i,j,count=0;
	scanf("%d",&num);
	int x;
	x=num/2;
	if(num%2==0)
	{
		for(i=1; i<=num; i++)
		{
			for(j=1; j<num;j++)
			{
				if(j==(x+count)||j==(x-count))
				{
					printf("*");
				}
				else
				{
					printf("_");
				}
			}
			printf("\n");
			if(i==x)
			{
				continue;
			}
			else if(i>x)
			{
				count--;
			}
			else
			{
				count++;
			}
		}
	}
	else
	{   
		x++;
		for(i=1; i<=num; i++)
		{
			for(j=1; j<=num; j++)
			{
				if(j==(x+count)||j==(x-count))
				{
					printf("*");
				}
				else
				{
					printf("_");
				}
			}
			printf("\n");
			if(i>=x)
			{
				count--;
			}
			else
			{
				count++;
			}
		}
	}
	
	return 0;
}
