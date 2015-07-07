// 1858.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

//导弹拦截
int missleIntercept(int * missle,int num,int * dp)
{
	int res = 0;
	for (int i =num-1; i >= 0; i--)
	{
		for (int j = i; j <=num-1; j++)
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
	int times;
	cin >> times;
	int nMissles[100000];
	int dp[100000];

	while (times--)
	{
		int numOfMissles;
		cin >> numOfMissles;
		for (register int i = 0; i < numOfMissles; i++)
		{
			int element;
			scanf("%d",&element);
			nMissles[i] = element;
		}
		std::fill_n(dp, numOfMissles, 1);
		int res = missleIntercept(nMissles,numOfMissles,dp);
		std::fill_n(nMissles, numOfMissles, 0);

		printf("%d\n",res);
	}
	return 0;
}


