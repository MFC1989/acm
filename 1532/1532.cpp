// 1532.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class mMap
{
public:
	char old;
	char key;
	mMap(char a,char b)
	{
		old = a;
		key = b;
	}
};

vector<mMap> vec;
string str,letter;

bool checkStr(char ch)
{
	if (! isspace(ch))
	{
		if (!isupper(ch))
		{
			exit(0);
		}
	}
}

bool checkLetter(char ch)
{
	if (! isupper(ch))
	{
		exit(0);
	}
}
int main()
{
	int times;
	cin >> times;
	if (times<1||times>1000)
	{
		exit(0);
	}
	int currentTimes = 0;
	while (currentTimes!=times)
	{
		for (int i = 0; i < 26; i++)
		{
			vec.push_back(mMap('A' + i, ' '));
		}
		cin.sync();
		//getchar();
		getline(cin, str);
		for_each(str.begin(), str.end(),checkStr);

		cin.sync();
		//getchar();
		getline(cin, letter);
		for_each(letter.begin(), letter.end(), checkLetter);
		if (letter.size()!=26)
		{
			exit(0);
		}
		for (int i = 0; i < 26; i++)
		{
			vec[i].key = letter[i];
		}

		int flags = 0;
		for (int i = 0; i < str.size(); i++)
		{
			for (int j = 0; j < vec.size(); j++)
			{
				char a = str[i];
				char b = vec[j].key;
				if (str[i] == vec[j].old)
				{
					str[i] = vec[j].key;
					break;
				}
			}

		}

		currentTimes++;
		if (currentTimes!=times)
		{
			cout << currentTimes << " " << str << endl;

		}
		else
		{
			cout << currentTimes << " " << str ;

		}
		vec.clear();
	}


	return 0;
}

