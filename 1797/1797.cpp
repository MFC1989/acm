// 1797.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool mCountPre(char ch)
{
	if (ch=='1'||ch=='2')
	{
		return false;
	}
	return true;
}
int main()
{	
	int score1=0;
	int score2=0;
	int score3=0;

	int times;
	scanf("%d",&times);
	if (times<0||times>1000)
	{
		exit(0);
	}
	string str;
	while(times--)
	{
		cin>>str;
		score1=count(str.begin(),str.end(),'1');
		score2=count(str.begin(),str.end(),'2');
		score3=count_if(str.begin(),str.end(),mCountPre);
		if (score3>0)
		{
			exit(0);
		}
		if (score1==score2)
		{
			printf("1=2\n");
			continue;
		}
		if (score1>score2)
		{
			printf("1>2\n");
			continue;
		}
		if (score1<score2)
		{
			printf("1<2\n");
			continue;
		}
	}

	return 0;
}

