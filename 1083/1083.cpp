// 1083.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;


void outputSplitBySpace(char ch)
{
	if ((int)ch != 32)
	{
		cout << ch;
	}
	else
	{
		cout << endl;
		cout << endl;

	}

}


int main()
{
	vector<string> vec;
	int N, M;
	cin >> N;
	M = N;
	string tmp;
	char buffer[1024] = { 0x00 };

	while (cin.getline(buffer, 1024))
	{
		tmp = string(buffer);
		vec.push_back(tmp);
	}
	vector<string> vec1(vec.size() - 1);
	copy(vec.begin() + 1, vec.end(), vec1.begin());

	for (int j = 0; j < N; j++)
	{
		cout << vec1[j] << endl;
		cout << endl;
	}

	for (int i = M; i < vec1.size()-1; i++)
	{
		if (vec1[i].length() == 1)
		{

		}
		else
		{
			for_each(vec1[i].begin(), vec1[i].end(), outputSplitBySpace);
		}
		cout << endl;
	}

	int lastElemIndex = vec1.size() - 1;
	for_each(vec1[lastElemIndex].begin(), vec1[lastElemIndex].end(), outputSplitBySpace);

	return 0;
}