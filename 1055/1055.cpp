// 1055.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;

		bool isOne = false;
		if (m == 1)
		{
			isOne = true;
		}

		int flag = 0;
		while (!isOne)
		{
			if (m == 1)
			{
				isOne = true;
			}

			if (m % 2 != 0 && m != 0)
			{
				m = (m * 3) + 1;
			}
			else
			{
				m /= 2;
			}

			flag++;
		}


		if (flag % 2 == 0)
		{
			cout << "I win!" << endl;
		}
		else
		{
			cout << "I lost!" << endl;
		}

	}
	
	return 0;
}