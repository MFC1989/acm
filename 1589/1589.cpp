// 1589.cpp : Defines the entry point for the console application.
/*
现在有n盏灯，编号1～n。第1个人把所有灯打开，第2个人按下所有编号为2的倍数的灯的开关（这些灯将被关掉），第3个人按下所有编号为3的倍数的灯的开关（其中关掉的灯将被打开，开着的灯将被关闭），依次类推。一共有k个人，问最后哪些灯是开着的？
*/


#include "stdafx.h"

#include <cstdio>
#include <string.h>

void turnLight(int n,int k)
{
	bool * lightCols = new bool[n + 1];
	memset(lightCols, 1, n + 1);

	int lastindex = n;	

	for (int i = 2; i <= k;i++)
	{
		for (int j = i; j <= n;j+=i)
		{
			lightCols[j] = !(lightCols[j]);
		}
	}


	for (int i = n; i >=0;i--)
	{
		if (lightCols[i])
		{
			break;
		}
		lastindex--;
	}


	for (int i = 1; i <=n;i++)
	{
		if (lightCols[i]==1)
		{
			if (i!=lastindex)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	delete [] lightCols;

}


int main()
{
	int n,  k;
	scanf("%d%d", &n, &k);
	turnLight(n, k);
	return 0;
}

