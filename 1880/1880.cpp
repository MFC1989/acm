// 1880.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>


int getIndex(int len)
{
	int cur, first;
	scanf("%d", &first);

	int i;
	for ( i = 0; i < len-1;i++)
	{
		scanf("%d", &cur);
		first ^= cur;
	}
	return first;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", getIndex(n));
	return 0;
}

