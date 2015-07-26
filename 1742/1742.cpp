// 1742.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const int BUFFLEN = 20;
char outPutBuff[BUFFLEN] = { 0x00 };
char resStr[BUFFLEN] = { 0x00 };
vector<string> final;

int t = 0;

char mToUpper(char ch)
{
	if (isalpha(ch)&&islower(ch))
	{
		exit(0);
	}
	
}

void printNumBy3Type(int num,int count)
{
	if (num<0||num>1000)
	{
		exit(0);
	}
	memset(resStr, 0, BUFFLEN);
	sprintf(resStr,"Case %d:\n", count);
	//final.push_back(resStr);
	cout << resStr;

	
	memset(resStr, 0, BUFFLEN);
	memset(outPutBuff, 0, BUFFLEN);
	itoa(num, outPutBuff, 2);
	sprintf(resStr,"%s%c\n", outPutBuff, 'B');
	//final.push_back(resStr);
	cout << resStr;
	memset(resStr, 0, BUFFLEN);
	memset(outPutBuff, 0, BUFFLEN);
	sprintf(resStr,"%d%c\n", num, 'D');
	cout << resStr;
	//final.push_back(resStr);
	memset(resStr, 0, BUFFLEN);
	memset(outPutBuff, 0, BUFFLEN);
	itoa(num, outPutBuff, 16);
	//if (t==count)
	//{
	//	sprintf(resStr, "%s%c\n", outPutBuff, 'H');
	//}
	//else
	//{
		sprintf(resStr, "%s%c\n", outPutBuff, 'H');
	//}
	//final.push_back(resStr);
	cout << resStr;
	cout << endl;
}

int main()
{
	int times;
	cin>>times;
	t = times;
	int count=0;
	while(times--)
	{
		string strNum;
		transform(strNum.begin(), strNum.end(), strNum.begin(), mToUpper);
		cin>>strNum;
		count++;
		//cout << "Case " << ++count << ":" << endl;
		int len=strNum.length();
		char NumType=strNum[len-1];
		 
		if( isdigit(NumType))
		{
			printNumBy3Type(atoi(strNum.c_str()),count);
		}
		else
		{
			int len = strNum.length();
			if(NumType=='B')
			{
				strNum = strNum.substr(0,len-1);
				int decNum=atoi(strNum.c_str());
				printNumBy3Type(decNum,count);
			}
			else if (NumType=='H')
			{
				strNum = strNum.substr(0, len - 1);
				int decNum = atoi(strNum.c_str());
				printNumBy3Type(decNum,count);
			}
		}
	}

	return 0;
}