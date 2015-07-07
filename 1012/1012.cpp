// 1012.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning(disable:4996)

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define manStrLen 18

int main()
{
	int times;
	scanf("%d",&times);
	int r,n;
	char buff[manStrLen] = { 0x00 };

	while (times--)
	{
		memset(buff, 0, manStrLen);
		scanf("%d%d", &n,&r);
		 
		if (n < 0)
		{
			printf("-");
		}
		itoa(abs(n), buff,r);
		int len = strlen(buff);
		int i;
		for (i = 0; i < len;i++)
		{
			if (islower(buff[i]))
			{
				buff[i]=toupper(buff[i]);
			}
		}
		printf("%s\n", buff);

	}

 
	return 0;
}

