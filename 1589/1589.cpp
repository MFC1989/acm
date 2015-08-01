// 1589.cpp : Defines the entry point for the console application.
/*
������nյ�ƣ����1��n����1���˰����еƴ򿪣���2���˰������б��Ϊ2�ı����ĵƵĿ��أ���Щ�ƽ����ص�������3���˰������б��Ϊ3�ı����ĵƵĿ��أ����йص��ĵƽ����򿪣����ŵĵƽ����رգ����������ơ�һ����k���ˣ��������Щ���ǿ��ŵģ�
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

