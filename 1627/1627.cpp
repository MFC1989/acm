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

int mIsAlpha(char ch)
{
	if (isalpha(ch))
	{
		return ch;
	}
	return 0;
}
int main()
{
	int times;
	cin >> times;
	if (times<1 || times>10000)
	{
		exit(0);
	}
	int totalT=0, totalS=0;
	string tmpStr;
	cin.sync();
	while (times--)
	{
		getline(cin,tmpStr);
		cin.sync();
		int charNums = 0;
		charNums= count_if(tmpStr.begin(), tmpStr.end(), mIsAlpha);
		//if (charNums<1||charNums>100)
		//{
		//	exit(0);
		//}

		if (tmpStr.size()<1||tmpStr.size()>100)
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

