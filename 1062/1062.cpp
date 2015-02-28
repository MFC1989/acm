// 1062.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void mPrint(int tArray[], int Len)
{
	int i;
	for (i = 0; i < Len - 1; i++)
	{
		printf("%d ", tArray[i]);
	}

	printf("%d\n", tArray[i]);
}

void QuickSort(int tArray[],int first,int last)
{
	if (last<=first)
	{
		return ;
	}

	int flag = tArray[first];
	int index = last;

	for (int i = last; i >= first + 1; i--)
	{
		if (tArray[i]>=flag)
		{
			std::swap(tArray[index], tArray[i]);
			index--;
		}
	}

	tArray[first] = tArray[index];
	tArray[index] = flag;

	QuickSort(tArray, first, index - 1);
	QuickSort(tArray, index + 1,last);

}


int main()
{
	int mArray[100000] = { 0x00};
	int Lenth;
	int lenReserve;
	cin >> Lenth;
	lenReserve = Lenth;
	int tmp;
	int i=0;
	while (Lenth--)
	{

		scanf("%d", &tmp);
		mArray[i] = tmp;
		i++;
	}

	QuickSort(mArray, 0, lenReserve - 1);
	mPrint(mArray, lenReserve);
	return 0;
}

