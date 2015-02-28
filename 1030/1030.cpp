// 1030.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int standard;

bool isNotStandard(int tmpScore)
{
	if (tmpScore>=standard)
	{
		return false;
	}
	return true;
}

int main()
{
	vector<int> vecInt;
	int totalPlayers;
	int score;
	cin>>totalPlayers;
	if (totalPlayers>1000&&totalPlayers<1)
	{
		exit(0);
	}
	while (totalPlayers--)
	{
		cin>>score;
		vecInt.push_back(score);
	}
	cin>>standard;
	
	std::vector<int>::iterator bound=stable_partition(vecInt.begin(),vecInt.end(),isNotStandard);
	for (int i=0;i<vecInt.size();i++)
	{
		if (i+1==vecInt.size())
		{
			cout<<vecInt[i]<<endl;
		}
		else
		{
			cout<<vecInt[i]<<" ";
		}
	}
	vector<int>Buff;

	Buff.resize(distance(bound,vecInt.end()));
	copy(bound,vecInt.end(),Buff.begin());
	stable_sort(Buff.begin(),Buff.end());

	if (!Buff.empty())
	{
		for (int i=0;i<Buff.size();i++)
		{
			if (i+1==Buff.size())
			{
				cout<<Buff[i]<<endl;
			}
			else
			{
				cout<<Buff[i]<<" ";
			}
		}
	}
	else
	{
		cout<<endl;
	}
	 
	return 0;
}

