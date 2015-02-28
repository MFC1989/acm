// 1429.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> vec;
int  main( )
{
	int n,m;
	cin>>n>>m;
	int flag=0;
	for (int i=1;i<=n;i++)
	{
		vec.push_back(i);
	}
	
	do {		
		if (flag==m)
		{
			for (int i=0;i<vec.size();i++)
			{	
				cout<<vec[i]<<" ";
			}
			cout<<endl;
			break;
		}
		
			flag++;

	} while ( std::next_permutation(vec.begin(),vec.end() ));
	return 0;
}

