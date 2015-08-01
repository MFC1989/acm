// 1042.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> vecInt;
	int lenth;
	cin >> lenth;

	if (lenth<1 || lenth>10000)
	{
		exit(0);
	}
	while (lenth--)
	{
		int tmp;
		cin >> tmp;
		vecInt.push_back(tmp);
	}

	int queryTimes;
	cin >> queryTimes;
	if (queryTimes > 500000 || queryTimes < 1)
	{
		exit(0);
	}
	while (queryTimes--)
	{
		int mBegin, mEnd;
		cin >> mBegin >> mEnd;
		if (mBegin<1 || mEnd>vecInt.size())
		{
			exit(0);
		}
		if (queryTimes==0)
		{
			cout << *(min_element(vecInt.begin() + mBegin - 1, vecInt.begin() + mEnd - 1));
		}
		else
		{
			cout << *(min_element(vecInt.begin() + mBegin - 1, vecInt.begin() + mEnd - 1)) << endl;
		}
		//cout << *(vecInt.begin() + mBegin - 1) << endl;
		//cout << *(vecInt.begin() + mEnd - 1) << endl;
	}

	return 0;
}


