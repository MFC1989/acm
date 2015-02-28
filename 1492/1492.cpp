// 1492.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void mPrint(const string & Res)
{
	cout<<Res<<endl;
}

void checkPara(long ta,long tb,long tc)
{
	if (ta<-1000000)
	{
		exit(0);
	}
	if (tb>1000000)
	{
		exit(0);
	}
	if (tc<-1000000||tc>1000000)
	{
		exit(0);
	}

}
vector<string> vec;
int main()
{
	long n=0;
	cin>>n;
	if (n<=0)
	{
		exit(0);
	}
	long a=0;
	long b=0;
	long c=0;

	while (n>0)
	{
		n--;
		
		cin>>a>>b>>c;
		checkPara(a,b,c);

		if ((b-c)>a)
		{
			vec.push_back("advertise");
			continue;
		}

		if ((b-c)==a)
		{
			vec.push_back("does not matter");
			continue;
		}

		if ((b-c)<a)
		{
			vec.push_back("do not advertise");
			continue;
		}
	}
	
	for_each(vec.begin(),vec.end(),mPrint);
	return 0;
}

