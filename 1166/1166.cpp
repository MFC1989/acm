// 1166.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cassert>
#include <algorithm>
#include <map>
using namespace std;

multimap<int ,int>    m1;
int res;

inline int numOfFactor(int tmp)
{
	res=0;
	for (register int i=1;i<=tmp/2;i++)
	{
		if (tmp%i==0)
		{
			res++;
		}
	}
	return (res+1);
}

int main()
{
	//m1.insert( make_pair(0,0));
	int n;
	cin>>n;
	if (n<0||n>500000)
	{
		exit(0);
	}
	for (register int i=1;i<n;i++ )
	{
		m1.insert( make_pair(numOfFactor(i),i ));
	}

	pair<int,int> maxValuePair=  *m1.rbegin();
	for (multimap<int,int>::iterator it1=m1.begin();it1!=m1.end();it1++)
	{
		pair<int,int> resultPair=* it1;

		if (resultPair.first==maxValuePair.first)
		{
			cout<<resultPair.second<<" "<<resultPair.first<<endl;    
			break;
		}    
	}

	return 0;
}
