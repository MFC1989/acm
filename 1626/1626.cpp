// 1626.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

struct buff
{
	int price;
	int dif;
public:
	buff(int p,int d)
	{
		price = p;
		dif = d;
	}
};

bool getMaxProfitAnd2Price(int array[],int n,map<int,int> & trades)
{
	vector<int>diffBuff(n, 0);
	int tmpDiff = 0;					//全局变量保存上次的差值
	int maxPrice = array[0];		//保存左边最大的值
	int maxDiff = 0;				//最后要返回的值


	for (int i = 0; i < n - 1; i++)
	{
		bool isCurMax = false;

		if (maxPrice<array[i])
		{
			maxPrice = array[i];
		}
	
		diffBuff[i] = array[i] - array[i + 1]; 		//本次差值

		if (diffBuff[i]<tmpDiff)
		{
			diffBuff[i] = tmpDiff;					//将本次差值与上次差值比较,若上次差值大于本次，则取上次
		}

		tmpDiff = maxPrice - array[i + 1];			//将本次的差值保存下来，作为下次的计算差值的”上次“。
		
		if (maxDiff<diffBuff[i])
		{
			maxDiff = diffBuff[i];
		}
	}

	//int count=std::count(maxBuff.begin(),maxBuff.end(), maxDiff);
	//if (count>1)	//代表出现个多个相同的差值，此时要选择最小的
	//{

	//}

	if (maxDiff=0)
	{
		return false;
	}
	else
	{
		return true;
	}

}


int main()
{
	map <int,int>tradeCols;
	int priceArray[6] = { 4,2, 3, 0,1,3 };
	getMaxProfitAnd2Price(priceArray,4,tradeCols);
	return 0;
}

