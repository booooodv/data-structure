#ifndef Monkey_hpp
#define Monkey_hpp

#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

typedef struct LNode //����һ������ṹ��
{
	int data;
	struct LNode *next;
}LinkNode;

class Monkey{
public:
	Monkey();	//���캯��
	void creatList(LinkNode *&L,int m);	//����ѭ������
	void destroyList(LinkNode *&L);	//�ݻ�����
	void listDeleteN(LinkNode *&L,int n);	//�������n��ɾ����n��Ԫ��
};

#endif