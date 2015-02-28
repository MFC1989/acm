// 1880.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long old=0;
	long long i=1;
	long long totalNum;
	scanf("%lld",&totalNum);
	if (totalNum>10000000||totalNum%2==0||totalNum<1)
	{
		exit(0);
	}
	bool find=false;
	while( totalNum--)
	{
		long long tmp=0;
		scanf("%lld",&tmp);
		
		if (i%2!=0)
		{
			old=tmp;
		}
		else
		{
			if (old!=tmp)
			{
				find=true;
				continue;	
			}
		}
		i++;
	}
	if (find)
	{
		printf("%d\n",old);
	}
	else
	{
		printf("%d\n",totalNum);
	}
	return 0;
}

