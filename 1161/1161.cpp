// 1161.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

//导弹拦截
int missleIntercept(int * missle, int num, int * dp)
{
	int res = 0;
	for (int i = num - 1; i >= 0; i--)
	{
		for (int j = i; j <= num - 1; j++)
		{
			if (missle[i] > missle[j] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}
		if (dp[i]>res)
		{
			res = dp[i];
		}
	}
	return res;
}


int main()
{

	int nMissles[1000] = {0x00};
	int dp[1000];

		int numOfMissles;
		cin >> numOfMissles;
		if (numOfMissles<1 || numOfMissles>1000)
		{
			exit(0);
		}
		for (register int i = 0; i < numOfMissles; i++)
		{
			int element;
			scanf("%d", &element);
			nMissles[i] = element;
		}

		for (int i = 0; i < 1000; i++)
		{
			dp[i] = 1;
		}
		int res = missleIntercept(nMissles, numOfMissles, dp);
	
		printf("%d\n", res);
	return 0;
}
