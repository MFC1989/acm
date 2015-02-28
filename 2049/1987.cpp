// 2049.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int countPlayer;
	cin>>countPlayer;
	while (countPlayer--)
	{
		int countGame;		//每个玩家的场次
		cin>>countGame;
		if (countGame==0)
		{
			cout<<0<<endl;
			continue;
		}
		list<int> scoreCollection;
		while (countGame--)
		{
			int score;
			cin>>score;
			scoreCollection.push_back(score);
		}
		cout<<*max_element(scoreCollection.begin(),scoreCollection.end())<<endl;
		scoreCollection.clear();
	}
	return 0;
}

