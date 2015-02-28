// 2060.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int fingerIndex = 0;
	int queryTimes;
	cin >> queryTimes;

	if (queryTimes<1||queryTimes>100)
	{
		exit(0);
	}
	vector<int> buff;

	while (buff.size()<=100200)
	{
		buff.push_back(1);
		buff.push_back(2);
		buff.push_back(3);
		buff.push_back(4);
		buff.push_back(5);
		buff.push_back(4);
		buff.push_back(3);
		buff.push_back(2);

	}

	while (queryTimes--)
	{
		int index;
		cin >> index;
		if (index<1||index>100000)
		{
			exit(0);
		}
		cout << buff[index - 1] << endl;
	}
	return 0;
}

