// 1829.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning(disable:4996)

#include <iostream>
#include <string>
#include <iterator>
#include <cctype>
#include <algorithm>
using namespace std;

bool isNum(char ch)
{
	if (isdigit(ch))
	{
		return true;
	} 
	else
	{
		return false;
	}
}

void checkPara(string str)
{
	int CountSpace=count(str.begin(), str.end(), ' ');
	int CountNum=count_if(str.begin(), str.end(), isNum);
	if (CountSpace!=1||CountSpace+CountNum!=str.size())
	{
		exit(0);
	}
}

int getTwoInt(string buff, int &a, int &b)
{
	string  str1, str2;
	size_t SpacePos = buff.find(' ');
	 str1.resize(SpacePos + 1);
	 str2.resize(buff.size() - SpacePos);
	copy(buff.begin(), buff.begin() + SpacePos, str1.begin());
	copy(buff.begin() + SpacePos, buff.end(),str2.begin());

	a = atoi(str1.c_str());
	int b0 =atoi(str2.c_str());

	if (a < 0 || a>1000000000 || b0 < 0 || b0>1000000000)
	{
		exit(0);
	}

	std::reverse(str2.begin(), str2.end());

	if (str2[0]=='0')
	{
		size_t LastZeroPos = str2.find_last_of('0');
		str2.erase(0, LastZeroPos + 1);
	}
	b = atoi(str2.c_str());

	return a + b;
}

int main()
{
	string buff;
	int a, b;
	while (getline(cin, buff))
	{
		checkPara(buff);
		cout << getTwoInt(buff, a, b) << endl;
	}

	return 0;
}

