// 1586.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
int main()
{
	
	int times;
	scanf("%d", &times);
	if (times < 1 || times>100000)
	{
		exit(0);
	}

	int heads, legs;
	int chickens, rabbits;
	int cases = 0;
	while (times--)
	{
		cases++;
		scanf("%d%d", &heads, &legs);
		if (heads<0||heads>100||legs<0||legs>100)
		{
			exit(0);
		}
		int tmp = (legs - (heads<<1)) ;

		if ((tmp&1)==0&&tmp>=0)
		{
			rabbits = (tmp>>1);
			chickens = heads-rabbits;
			if (rabbits>=0&&chickens>=0)
			{
				printf("Case %d: %d\n",cases,rabbits);
			}
			else
			{
				printf("Case %d: No answer\n",cases);
				 
			}
		}
		else
		{
			printf("Case %d: No answer\n",cases);
		}
	}
	return 0;
}