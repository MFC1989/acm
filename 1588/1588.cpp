// 1588.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

inline  int calc(char op,int tn1,int tn2)
{
	if (tn1<1||tn1>1000)
	{
		exit(0);
	}
	if (tn2<1||tn2>1000)
	{
		exit(0);
	}

	switch (op)
	{
	case '+':
		return tn1+tn2;
		break;
	case '-':
		return tn1-tn2;
		break;
	case '*':
		return tn1*tn2;
		break;
	case '/':
		return tn1/tn2;
		break;
	default:
		exit(0);
		return 0;
		break;
	}
}

//vector<int> vec;
int main()
{
	int numOfTests=4;
	//cin>>numOfTests;
	scanf("%d", &numOfTests);
	if (numOfTests>100000||numOfTests<1)
	{
		return 0;
	}
	fflush(stdin);
	//string str,tmp;
	//stringstream ss;        
	//char mOperator;
	//int n1,n2;
	////clear the buffer of cin
	//cin.sync();
	int count=0;
	//char buffer[5]={0x00};


	while (numOfTests)
	{
		//getline(cin,str);
		//
		//ss<<str;
		//ss>>mOperator>>n1>>n2;
		//cout<<"Case "<<count<<": "<<n1<<mOperator<<n2<<"="<<calc(mOperator,n1,n2)<<endl;
		 //vec.push_back(calc(mOperator,n1,n2));
		//clear the buffer of stringstream
		//ss.str("");

		count++;
		char op;
		int n1, n2;
		//cin >> op >> n1 >> n2;
		/*scanf("%c", &op);
		scanf("%d",  &n1);
		scanf("%d",  &n2);*/
		scanf("%c%d%d",&op,&n1,&n2);
		fflush(stdin);

		//cout << "Case " << count << ": " << n1 << op << n2 << "=" << calc(op, n1, n2) << endl;
		printf("Case %d: %d%c%d=%d\n", count, n1, op, n2, calc(op, n1, n2));
		numOfTests--;
	}
	//cout<<vec[0]<<endl;
	return 0;
}

