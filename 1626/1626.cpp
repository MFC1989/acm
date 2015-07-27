// 1626.cpp : �������̨Ӧ�ó������ڵ㡣
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
	int tmpDiff = 0;					//ȫ�ֱ��������ϴεĲ�ֵ
	int maxPrice = array[0];		//�����������ֵ
	int maxDiff = 0;				//���Ҫ���ص�ֵ


	for (int i = 0; i < n - 1; i++)
	{
		bool isCurMax = false;

		if (maxPrice<array[i])
		{
			maxPrice = array[i];
		}
	
		diffBuff[i] = array[i] - array[i + 1]; 		//���β�ֵ

		if (diffBuff[i]<tmpDiff)
		{
			diffBuff[i] = tmpDiff;					//�����β�ֵ���ϴβ�ֵ�Ƚ�,���ϴβ�ֵ���ڱ��Σ���ȡ�ϴ�
		}

		tmpDiff = maxPrice - array[i + 1];			//�����εĲ�ֵ������������Ϊ�´εļ����ֵ�ġ��ϴΡ���
		
		if (maxDiff<diffBuff[i])
		{
			maxDiff = diffBuff[i];
		}
	}

	//int count=std::count(maxBuff.begin(),maxBuff.end(), maxDiff);
	//if (count>1)	//������ָ������ͬ�Ĳ�ֵ����ʱҪѡ����С��
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

