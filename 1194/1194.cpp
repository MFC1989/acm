// 1194.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getRes(double a,double b,double c)
{
	double p = (a + b + c) *0.5;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}

int main()
{	
	int times;
	int nums;
	cin >> times;
	while (times--)
	{
		cin >> nums;
		
		if (nums==1)
		{
			double a, b, c;
			cin >> a >> b >> c;
			cout << fixed << setprecision(1) << getRes(a,b,c) << endl;
		}
		else
		{	
			double res = 0;
			while (nums--)
			{
				double a, b, c;
				cin >> a >> b >> c;
				res += getRes(a, b, c);
			}
			cout << fixed << setprecision(1) << res << endl;
		}
			
	}
	return 0;
}

