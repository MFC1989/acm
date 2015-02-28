// 1589.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <bitset>
using namespace std;



bool myFunction(int n,int item)
{
	if (item%n==0)
	{
		return true;
	}
	return false;
}

void printItem(int n)
{
	cout<<n<<endl;
}
int main()
{
	int n,k;
	cin>>n;
	if (n<1||n>1000)
	{
		return 0;
	}
	cin>>k;
	if (k<1||k>1000||k>n)
	{
		return 0;
	}
	bool array[1001]={false};
	if (k>=1)
	{
		for (int i=0;i<n;i++)
		{
			array[i]=true;
		/*	if (k==1)
			{
				cout<<i+1<<" ";
			}*/
		}
	}
	if (k>=2)
	{
		for (int i=0;i<n;i++)
		{
			if (i%2==0)
			{
				array[i]=false;
			}
		}
	}

	vector<int> vec;

	for (int i=0;i<n;i++)
	{
		vec.push_back(array[i]);
	}
	
	 int flag=2;
	//for (vector<int>::iterator it=vec.begin();it!=vec.end();it++)
	//{
	//	
	//}
	//
	while (flag<=k)
	{
		for (int i=2;i<=vec.size();i++)
		{
			if (i%flag==0)
			{
				if (vec[i]==0)
				{
					vec[i]=1;
					continue;
				}
				else 
				{
					vec[i]==0;
					continue;
				}
			}
		}
		 
		flag++;
	}
		
 
	/*	for (int i=2;i<=k;i++)
		{
			vec.erase (remove_if(vec.begin(),vec.end(),bind1st(ptr_fun(  myFunction ),i  )) ,vec.end());
		}*/
		


	return 0;
}

