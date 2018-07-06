#ifndef Monkey_hpp
#define Monkey_hpp

#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

typedef struct LNode //定义一个链表结构体
{
	int data;
	struct LNode *next;
}LinkNode;

class Monkey{
public:
	Monkey();	//构造函数
	void creatList(LinkNode *&L,int m);	//创建循环链表
	void destroyList(LinkNode *&L);	//摧毁链表
	void listDeleteN(LinkNode *&L,int n);	//传入变量n，删除第n个元素
};

#endif