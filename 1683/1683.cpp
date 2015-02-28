// 1683.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <vector>
#include <iostream>
#include <algorithm>
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

	vector<int>VecOld;
	vector<int>VecNew;

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
			VecOld.push_back(tmp);
		}
		VecNew = VecOld;
		sort(VecOld.begin(), VecOld.end());
		if (VecNew==VecOld)
		{
			cout << "N/A" << endl;
		}
		else
		{
			mPrint(VecNew);
		}
		VecOld.clear();
		VecNew.clear();
	}

	return 0;
}

