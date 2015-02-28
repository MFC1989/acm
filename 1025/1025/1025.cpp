// 1025.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "stdio.h"
bool isNeed(int tmp)
{	
	if ((tmp%3==1)&&(tmp-((tmp<<2)>>2)==0))
	{
		return true;
	}
	return false;
}

int main()
{
	int array[144]={0x00};
	{
		for (register int i=1;i<=143;i++)
		{
			array[i]=(1+i)*i>>1;
		}
	}

	int n;
	while (scanf("%d",&n))
	{
		int flag=0;
		for (int i=1;i<=143;i++)
		{
			if (array[i]<=n&&((array[i]>>1)<<1)==array[i])
			{
				if (isNeed(array[i]))
				{
					flag++;
					if (flag==1)
					{
						printf("%d:",n);
					}
					else
					{
						printf(" %d",array[i]);
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}

