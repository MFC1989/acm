// 1599.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool mIsA(char ch)
{
	return isalpha(ch);
}

bool mIsN(char ch)
{
	return isdigit(ch);
}


int main()
{
	string str;
	int charCount=0;
	int numCount=0;
	while (cin>>str)
	{
		charCount+=count_if(str.begin(),str.end(),mIsA);
		numCount+=count_if(str.begin(),str.end(),mIsN);
	}
	cout<<charCount<<" "<<numCount<<endl;
	return 0;
}

