// 1958.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


int main()
{
	int totalOfPlayer, targetIndex;
	
	while (cin >> totalOfPlayer >> targetIndex)
	{
	vector<int> vecScore;
	
		int totalOfPlayerSave = totalOfPlayer;
		while (totalOfPlayer--)
		{
			int tmp;
			cin >> tmp;
		
			vecScore.push_back(tmp);
		}

		sort(vecScore.begin(), vecScore.end());
		cout << vecScore[totalOfPlayerSave-targetIndex] << endl;
		vecScore.clear();
	}
    
	return 0;

}

