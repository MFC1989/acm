// 1750.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isWordRight(string tmp)
{
	if (tmp.length()>10)
	{
		return false;
	}
	for (int i=0;i<tmp.length();i++)
	{
		if (!isalpha(tmp[i]))
		{
			return false;
		}

		if (isspace(tmp[i]))
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int oldBookWords;
	int newBookWords;
	vector<string> oldBookWordCollection;
	vector<string> newBookWordCollection;
	vector<string> res;
	
	cin>>oldBookWords>>newBookWords;
	if (oldBookWords<0)
	{
		exit(0);
	}
	if (newBookWords>1000)
	{
		exit(0);
	}
	string word;
	char buffer[260]={0x00};
	while (oldBookWords--)
	{
		cin.sync();
		cin.getline(buffer,260);

		word=buffer;
		if (!isWordRight(word))
		{
			exit(0);
		}

		if (oldBookWordCollection.empty())
		{
			oldBookWordCollection.push_back(word);
		}
		else 
		{
			if (find(oldBookWordCollection.begin(),oldBookWordCollection.end(),word)!=oldBookWordCollection.end())
			{
				exit(0);
			}
			else
			{
				oldBookWordCollection.push_back(word);
			}
		}
	}
 
	while (newBookWords--)
	{
		cin>>word;
		cin.sync();
		cin.getline(buffer,260);

		word=buffer;

		if (!isWordRight(word))
		{
			exit(0);
		}


		if (newBookWordCollection.empty())
		{
			newBookWordCollection.push_back(word);
		}

		if (newBookWordCollection.size()>1)
		{
			if (find(newBookWordCollection.begin(),newBookWordCollection.end(),word)!=newBookWordCollection.end())
			{
				exit(0);
			}
			else
			{
				newBookWordCollection.push_back(word);
			}
		}
	}
	res.resize(max(newBookWordCollection.size(),oldBookWordCollection.size()));
	vector<string>::iterator retEndPos = set_difference( newBookWordCollection.begin(), newBookWordCollection.end(), oldBookWordCollection.begin(), oldBookWordCollection.end() , res.begin());
	
	res.resize( retEndPos - res.begin() ) ;   
	
	cout<<res.size()<<endl ;

	return 0;
}

