

#include<iostream>
using namespace std;


void selectPrim()
{
	int array[100] = { 0x00 };
	for (int i = 2; i < 100; i++)
	{
		if (!array[i])
		{
			for (int j = 2 * i; j < 100; j += i)
			{
				array[j] = 1;
			}
		}

	}

	int count = 0;
	for (int i = 2; i < 100; i++)
	{
		if (!array[i])
		{
			//cout << i << " ";
			count++;
		}
	}
	cout << endl;
}


int main()
{
	selectPrim();
	return 0;
}