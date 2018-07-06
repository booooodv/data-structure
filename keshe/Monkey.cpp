#include "Monkey.hpp"

Monkey::Monkey(){
	int m = 0,n = 2;	//用来接收用户输入
	while(m <= n && n > 1){		//m不大于n将无线循环
        cout << "#请输入m，n(m必须大于n）: ";
		cin >> m >> n;
	}
	/*
	 *	创建长度为m的单项循环链表
	 */
	LinkNode *L;	//头结点
	creatList(L,m);
	/*
	 *	循环删除第n个结点
	 */
	while(L -> next != L){
		listDeleteN(L,n);
	}
    cout << "@@@大王就是，第" << L -> data <<"号猴子@@@" <<endl;
}
void Monkey::creatList(LinkNode *&L,int m){	
	int *a = new int[m];
	for(int i = 1;i <= m;i++){		//给数组里顺序赋值
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
    r -> next = L -> next;   //把最后的指针指向头指针的下一个变为循环链表
    //让L不参与删除
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
	for(int i = 0;i < n-1;i++){	//循环n次让头结点指向要删除的上一个
		L = L -> next;
	}
	s = L -> next;
    Sleep(1);
    cout << "#" << s -> data << "号猴子已被淘汰" << endl;
	p = s;
	s = s -> next;
	L -> next = s;
	free(p);
}