// 1166.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"

#include <iostream>
#include <cassert>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

inline unsigned int factors(unsigned int n)
{
	unsigned int i = 2, k = 0, m = n, count = 1;
	while (m != 1)
	{
		for (; i <= m; i++)
		{
			if (m % i == 0)
			{
				k = 1;
				while (m % i == 0)
				{
					k++;
					m /= i;
				}
				count *= k;
			}
		}
	}
	return count;
}

multimap<int ,int>    m1;


//int res;
//
//inline int factors(int tmp)
//{
//	res=0;
//	for (register int i=1;i<=(tmp>>1);i++)
//	{
//		if (tmp%i==0)
//		{
//			res++;
//		}
//	}
//	return (res+1);
//}

int main()
{
	//m1.insert( make_pair(0,0));
	int n;
	cin>>n;
	if (n<0||n>500000)
	{
		exit(0);
	}

	for (register int i=n;i>=1;i-- )
	{
		m1.insert(make_pair(factors(i), i));
	}

	pair<int,int> maxValuePair=  *m1.rbegin();


	//vector<pair<int, int>> vec;

	//for (multimap<int,int>::iterator it1=m1.begin();it1!=m1.end();it1++)
	//{
	//	pair<int,int> resultPair=* it1;

	//	if (resultPair.first==maxValuePair.first)
	//	{
	//		cout<<resultPair.second<<" "<<resultPair.first/*<<endl*/;    
	//		//vec.push_back(make_pair(resultPair.second, resultPair.first));
	//		break;
	//	}    
	//}

	//multimap<int, int>::iterator itres =m1.find(maxValuePair.first);
	cout << maxValuePair.second << " " << maxValuePair.first << endl;


	return 0;
}

