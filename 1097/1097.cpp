// 1097.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <list>
using namespace std;
std::list <int> listInt;

int i=1;
int array[1000000]={0x00};
int main()
{
	int n;
	scanf("%d",&n);
	if (n<1||n>1000000)
	{
		exit(0);
	}
	listInt.resize(n);

	register int i=1;
	for (register list<int>::iterator mit=listInt.begin();mit!=listInt.end();mit++)
	{
		*mit=i++;    
	}

	int index=1; 
	int size=listInt.size();
	while (size>1)
	{

		array[index]=listInt.front();
		listInt.pop_front();
		size--;
		listInt.push_back(listInt.front());
		listInt.pop_front();
		index++;
	}
	array[index]=listInt.front();
	for (register int i=1;i<=n;i++)
	{
		if (i==n)
		{
			printf("%d\n",array[i]);
		}
		else
		{
			printf("%d ",array[i]);
		}
	}
	return 0;
}