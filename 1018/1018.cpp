// 1018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using namespace std;
vector<char> pre;
vector<char> mid;
vector<char> back;

typedef struct Node
{
	char data;
	Node * left;
	Node * right;
} Node,* BinTree;

enum InsertType
{
	LEFT,
	RIGHT
};

//初始化二叉树
void InitBinTree(BinTree mTree,char RootData)
{
	mTree->data = RootData;
	mTree->left = NULL;
	mTree->right = NULL;

}

Node *FindNode(BinTree mTree,char NodeData)
{
	Node * pNode;

	if (mTree == NULL)
	{
		return NULL;
	}
	else
	{
		if (mTree->data == NodeData)
		{
			return mTree;
		}
		else
		{
			if (pNode = FindNode(mTree->left, NodeData))
			{
				return pNode;
			}
			else if (pNode = FindNode(mTree->right, NodeData))
			{
				return pNode;
			}
			else
			{
				return NULL;
			}

		}
	}
	

}
//二叉树插入数据
void InsertData(BinTree mTree,char NodeData,char ParentChar,InsertType type)
{
	Node * pNode = mTree;

	//新建一个节点
	Node * tmpNode = new Node;
	tmpNode->data = NodeData;
	tmpNode->left = NULL;
	tmpNode->right = NULL;

	Node * ParentNode = FindNode(mTree, ParentChar);
	if (ParentNode)
	{
		switch (type)
		{
		case LEFT:
			ParentNode->left = tmpNode;
			break;
		case RIGHT:
			ParentNode->right = tmpNode;
			break;
		default:
			break;
		}

	}
	
}

//先序遍历
void PreOrder(Node * mTree)
{
	if (mTree)
	{
		//cout << mTree->data <<" ";
		pre.push_back(mTree->data);
		PreOrder(mTree->left);
		PreOrder(mTree->right);
	}
}

void MidOrder(Node * mTree)
{
	if (mTree)
	{
		MidOrder(mTree->left);
		//cout << mTree->data << " ";
		mid.push_back(mTree->data);
		MidOrder(mTree->right);
	}
}

void BackOrder(Node * mTree)
{
	if (mTree)
	{
		BackOrder(mTree->left);
		BackOrder(mTree->right);
		//cout << mTree->data << " ";
		back.push_back(mTree->data);
	}
}

void mPrint(vector<char> vecChar)
{
	int i;
	for ( i = 0; i < vecChar.size()-1;i++)
	{
		cout << vecChar[i] << " ";
	}
	cout << vecChar[i] << endl;
}

int main()
{



	BinTree mTree=new Node();

	InitBinTree(mTree,'D');
	InsertData(mTree, 'E', 'D', LEFT);
	InsertData(mTree, 'A', 'D', RIGHT);
	InsertData(mTree, 'H', 'E', LEFT);
	InsertData(mTree, 'F', 'E', RIGHT);
	InsertData(mTree, 'J', 'F', LEFT);
	InsertData(mTree, 'G', 'F', RIGHT);
	InsertData(mTree, 'C', 'G', RIGHT);
	InsertData(mTree, 'K', 'C', LEFT);

	InsertData(mTree, 'B', 'A', RIGHT);

	PreOrder(mTree);
	MidOrder(mTree);
	BackOrder(mTree);
	cout << "PreOrder: ";
	mPrint(pre);
	cout << "InOrder: ";
	mPrint(mid);
	cout << "PostOrder: ";
	mPrint(back);
	
	return 0;
}

