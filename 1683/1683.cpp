// 1683.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


void mPrint(vector<int>tmpVec)
{
	for (int i = 0; i < tmpVec.size() - 1;i++)
	{
		cout << tmpVec[i] << " ";
	}
	cout << *(tmpVec.end() - 1) << endl;
}

int main()
{
	int times;
	cin >> times;
	if (times<1||times>20)
	{
		exit(0);
	}

	vector<int>VecNum;
	vector<int>VecBuff;

	while (times--)
	{
		int countScore;
	

		cin >> countScore;
		if (countScore<1||countScore>1000)
		{
			exit(0);
		}
		while (countScore--)
		{
			int tmp;
			cin >> tmp;
			VecNum.push_back(tmp);
		}
		VecBuff = VecNum;
		sort(VecNum.begin(), VecNum.end(), std::less<int>());
		if (VecBuff==VecNum)
		{
			cout << "N/A" << endl;
		}
		else
		{
			mPrint(VecNum);
		}
		VecNum.clear();
		VecBuff.clear();
	}

	return 0;
}

