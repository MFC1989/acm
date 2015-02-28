// 1127.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	vector<int>mVector;
	while (scanf("%d",&n)!=EOF)
	{
		if (n%2==0||n<1||n>100)
		{
			exit(0);
		}
		while (n>0)
		{
			int tmp;
			cin>>tmp;
			mVector.push_back(tmp);
			n--;
		}
		for (int i=0;i<mVector.size();i++)
		{
			if (count(mVector.begin(),mVector.end(),mVector[i])==1)
			{
				cout<<mVector[i]<<endl;
				mVector.clear();
				break;
			}
		}

	}

	return 0;
}

