// 1601.cpp : Defines the entry polong long for the console application.
//

#include "stdafx.h"

#include <cstdio>
#include <iostream>
#include <map>
#include <hash_map>
using namespace std;


typedef long long  MLONGINT;
typedef map<MLONGINT, MLONGINT>::iterator mapit;

hash_map<int,int>s;
int main()
{
		map<MLONGINT,MLONGINT> cols;
		MLONGINT n;
		scanf("%lld", &n);
	
		MLONGINT tmp;
		while (n--)
		{
			scanf("%lld",&tmp);
			cols[tmp]++;
		}
		
		for (register mapit it = cols.begin(); it != cols.end(); it++)
		{
			printf("%lld %lld\n", (*it).first, (*it).second);
		}

	return 0;
}

