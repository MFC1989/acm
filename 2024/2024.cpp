// 2024.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>  
using namespace std;

stack<int> stackInt;
vector<int> vecTotalInt;
vector<int> vecPopRes;
void mPrint(int tmp)
{
	cout<<tmp<<" ";
}
int main()
{
	int n;
	
	cin>>n;
	if (n<1||n>100)
	{
		exit(0);
	}
	while (n>0)
	{
		int ai;
		cin>>ai;
		if (ai<=0||ai>=1000)
		{
			exit(0);
		}
		 
		if (stackInt.size()==0)
		{
			 stackInt.push(ai);
		}
		else
		{
			if ( count(vecTotalInt.begin(),vecTotalInt.end(),ai))
			{
				exit(0);
			}
			else
			{
				if (count(vecTotalInt.begin(),vecTotalInt.end(),ai))
				{
					exit(0);
				}
				while (stackInt.size()>0)
				{
					int last=stackInt.top();
					if (last>ai)
					{
						vecPopRes.push_back(last);
						stackInt.pop();
					}
					else
					{
						break;
					}
				}
				stackInt.push(ai);
			}

		}
		vecTotalInt.push_back(ai);
		n--;
	}
	
	while (!stackInt.empty())
	{
		int last=stackInt.top();
		vecPopRes.push_back(last);
		stackInt.pop();
	}
	for_each(vecPopRes.begin(),vecPopRes.end(),mPrint);
	cout<<endl;
	return 0;
}

