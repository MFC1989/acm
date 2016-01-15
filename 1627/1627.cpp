// 1627.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

char mTolower(char ch)
{
	if (isalpha(ch))
	{
		return tolower(ch);
	}
	return ch;
}

int mIsAlpha(char ch)
{
	if (isalpha(ch))
	{
		return ch;
	}
	return 0;
}

/*
6
ON THIS THE REST OF THE ACHAEANS WITH
ONE VOICE WERE FOR RESPECTING
THE PRIEST AND TAKING THE RANSOM THAT HE OFFERED; BUT NOT SO AGAMEMNON,
WHO SPOKE FIERCELY TO HIM AND SENT HIM ROUGHLY AWAY.
OLD MAN, SAID HE,
LET ME NOT FIND YOU TARRYING ABOUT OUR SHIPS
*/
int main()
{
	int times;
	cin >> times;

	if (times<1 || times>10000)
	{
		exit(0);
	}

	int totalT=0, totalS=0;
	string tmpStr;
	cin.sync();
getchar();
	while (times--)
	{
		char buff[200] = { 0x00 };
				
		cin.getline(buff, 100);
	
		//cout << buff << endl;
		tmpStr = buff;
		/*	getline(cin,tmpStr);
			cin.sync();
			getchar();*/
		int charNums = 0;
		charNums= count_if(tmpStr.begin(), tmpStr.end(), mIsAlpha);
		//if (charNums<1||charNums>100)
		//{
		//	exit(0);
		//}

		if (tmpStr.size()<1||tmpStr.size()>100)
		{
			exit(0);
		}
		std::transform(tmpStr.begin(), tmpStr.end(), tmpStr.begin(), mTolower);
		totalT += count(tmpStr.begin(), tmpStr.end(), 't');
		totalS += count(tmpStr.begin(), tmpStr.end(), 's');
		tmpStr.clear();
	}

	if (totalT>totalS)
	{
		cout << "English" << endl;
	} 
	else
	{
		cout << "Deutsch" << endl;
	}
	return 0;
}

