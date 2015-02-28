// 1811.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int mArray[3000001]={0x00};

vector<pair<int,int>>Vec;

bool mCmp(pair<int,int>P1,pair<int,int>P2)
{
	if (P1.second>P2.second)
	{
		return true;
	}	 
	return false;
}
int main()
{
	int count;
	int length;
	int tmp;
	int flag=0;
	bool newElem=false;
	 scanf("%d%d",&count,&length);
 
		for (int i=1;i<=length;i++)
		{
			scanf("%d",&tmp);
			mArray[i]=tmp;
			if (i==1)
			{
				mArray[0]=tmp;
			}

			if (mArray[i]!=mArray[i-1]||i==length)
			{
				flag++;
				Vec.push_back(make_pair(tmp,flag));
				flag=0;
			}
			else
			{
				flag++;
			}
			
		
			}

			sort(Vec.begin(),Vec.end(),mCmp);
			if (Vec[0].second!=Vec[1].second)
			{
				cout<<Vec[0].first;

			}
			else
			{
				cout<<Vec[Vec.size()-1].first;

			}

	return 0;
}

