// 1627.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char mTolower(char ch)
{
	if (isalpha(ch))
	{
		return tolower(ch);
	}
	return ch;
}

int main()
{
	int times;
	cin >> times;
	if (times<=1 || times>=10000)
	{
		exit(0);
	}
	int totalT=0, totalS=0;
	string tmpStr;
	while (times--)
	{
		//cin >> tmpStr;
		if (tmpStr.size()>100||tmpStr.size()<1)
		{
			exit(0);
		}
		std::transform(tmpStr.begin(), tmpStr.end(), tmpStr.begin(), mTolower);
		totalT += count(tmpStr.begin(), tmpStr.end(), 't');
		totalS += count(tmpStr.begin(), tmpStr.end(), 's');
		tmpStr.clear();
	}

	if (totalT>totalS)
	{
		cout << "English" << endl;
	} 
	else
	{
		cout << "Deutsch" << endl;
	}
	return 0;
}

