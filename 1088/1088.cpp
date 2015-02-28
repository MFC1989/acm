// 1088.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if (n<=0||n>=30)
	{
		exit(0);
	}
	vector<string> vecRes;
	vecRes.push_back("Gnomes:");
	while (n>0)
	{
		n--;
		int len1,len2,len3;
		cin>>len1>>len2>>len3;
		if (len1>=100||len1<1||len2>=100||len2<1||len3>=100||len3<1)
		{
			exit(0);
		}
		if (len1>len2&&len2>len3)
		{
			vecRes.push_back("Ordered");
			continue;
		}
		if (len1<len2&&len2<len3)
		{
			vecRes.push_back("Ordered");
			continue;
		}
		vecRes.push_back("Unordered");

	}
	
	for (int i=0;i<vecRes.size();i++)
	{
		cout<<vecRes[i]<<endl;
	}
	return 0;
}

