// 1063.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int flag;
void showArray(vector<int>tArray ,int len)
{
	bool isBreak=false;
	for (int i=0;i<len;i++)
	{
		
		if (flag<0)
		{
			isBreak=true;
			continue;
		}
		if (i==0)
		{
			cout<<"(";
		}
		if (i!=len-1)
		{
			if (i==flag)
			{
				cout<<tArray[i]<<")"<<" ";
			}
			else
			{
				cout<<tArray[i]<<" ";
			}
		}
	
		if (i==len-1)
		{
			cout<<tArray[i];
		}
	
	}
	if (!isBreak)
	{
		cout<<endl;
	}
}


void showRes(vector<int> mArray,int len)
{
	cout<<"Result"<<endl;
	for (int i=0;i<len;i++)
	{
		if (i==0)
		{
			cout<<"(";
		}
		if (i!=len-1)
		{
			cout<<mArray[i]<<" ";
		} 
		else
		{
			cout<<mArray[i]<<")"<<endl;
		}

	}

}
int main()
{ 
	vector<int>mArray;
	int len;
	cin>>len;
	if (len<1||len>400)
	{
		exit(0);
	}
	int tmp;
	while (len--)
	{
		cin>>tmp;	
		if (tmp<0||tmp>=100000)
		{
			exit(0);
		}
		mArray.push_back(tmp);
	}
	len=mArray.size();
	flag=len-1;
	cout<<"Source:"<<endl;
	for (int i=0;i<len;i++)
	{
		if (i==0)
		{
			cout<<"(";
		}
		if (i!=len-1)
		{
			cout<<mArray[i]<<" ";
		} 
		else
		{
			cout<<mArray[i]<<")"<<endl;
		}
	
	}
	vector<int>buff=mArray;
	sort(buff.begin(),buff.end());
	bool is_sort=true;
	for (int i=0;i<len;i++)
	{
		if (mArray[i]!=buff[i])
		{
			 is_sort=false;
		}

	}

	if (!is_sort)
	{
		cout<<"Bubble Sort:"<<endl;

		for (int i=0;i<len;i++)
		{
			for (int j=1;j<len-i;j++)
			{
				if (mArray[j-1]>mArray[j])
				{
					swap(mArray[j-1],mArray[j]);
				}

			}

			flag--;
			showArray(mArray,len);

		}
	}
	

	showRes(mArray,len);
	return 0;
}

