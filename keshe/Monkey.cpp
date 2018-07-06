#include "Monkey.hpp"

Monkey::Monkey(){
	int m = 0,n = 2;	//���������û�����
	while(m <= n && n > 1){		//m������n������ѭ��
        cout << "#������m��n(m�������n��: ";
		cin >> m >> n;
	}
	/*
	 *	��������Ϊm�ĵ���ѭ������
	 */
	LinkNode *L;	//ͷ���
	creatList(L,m);
	/*
	 *	ѭ��ɾ����n�����
	 */
	while(L -> next != L){
		listDeleteN(L,n);
	}
    cout << "@@@�������ǣ���" << L -> data <<"�ź���@@@" <<endl;
}
void Monkey::creatList(LinkNode *&L,int m){	
	int *a = new int[m];
	for(int i = 1;i <= m;i++){		//��������˳��ֵ
		a[i - 1] = i;
	}
	LinkNode *s,*r;
	L = (LinkNode *)malloc(sizeof(LinkNode));
    r = L;
	for(int i = 0;i < m;i++){
		s = (LinkNode *)malloc(sizeof(LinkNode));
		s -> data = a[i];
		r -> next = s;
		r = s;
	}
    r -> next = L -> next;   //������ָ��ָ��ͷָ�����һ����Ϊѭ������
    //��L������ɾ��
}
void Monkey::destroyList(LinkNode *&L){
	LinkNode * pre = L,*p = L -> next;
	while(p != NULL){
		free(pre);
		pre = p;
		p = pre ->next;
	}
	free(pre);
}
void Monkey::listDeleteN(LinkNode *&L,int n){
	LinkNode *s,*p;
	for(int i = 0;i < n-1;i++){	//ѭ��n����ͷ���ָ��Ҫɾ������һ��
		L = L -> next;
	}
	s = L -> next;
    Sleep(1);
    cout << "#" << s -> data << "�ź����ѱ���̭" << endl;
	p = s;
	s = s -> next;
	L -> next = s;
	free(p);
}