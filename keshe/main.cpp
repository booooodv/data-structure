//
//  main.cpp
//  sjjg
//
//  Created by 颜允锋 on 2018/7/3.
//  Copyright © 2018年 颜允锋. All rights reserved.
//

#include <iostream>
#include "Monkey.hpp"
#include "Sorts.hpp"
#include "Card.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    while(1){
		system("cls");
        int order = -1;
        cout << "############################" << endl;
        cout << "#                          #" << endl;
        cout << "#        1、猴子选王       #" << endl;
        cout << "#                          #" << endl;
        cout << "#        2、各种排序       #" << endl;
        cout << "#                          #" << endl;
        cout << "#        3、纸牌游戏       #" << endl;
        cout << "#                          #" << endl;
        cout << "#        0、退出游戏       #" << endl;
        cout << "#                          #" << endl;
        cout << "############################" << endl;
        while (1) {    //防止输入错误指令
            cout << "#请输入对应指令：";
            cin >> order;
            if(order < 0 || order > 3){
                cout << "#输入指令错误请重新输入。" << endl;
                continue;
            }
            break;
        }
        switch (order) {
            case 1://猴子
				{
					system("cls");
					cout << "#欢迎进入猴子选王游戏" << endl;
					Monkey mo;
					system("pause");
					break;
				}
			case 2://排序
				{
					int order1 = -1;
					int r[100],n;
					int flag1 = 1;
					cout << "#请输入排序整数个数：";
					cin >> n;
					Sorts st(n);
					cout << "#请输入" << n << "个整数：";
					for( int i = 0;i < n;i++){
						cin >> r[i];
					}
					while(flag1){
						system("cls");
						int rt[100];
						memcpy(rt,r,sizeof(r));
						cout << "############################" << endl;
						cout << "#                          #" << endl;
						cout << "#      欢迎进入排序演示    #" << endl;
						cout << "#                          #" << endl;
						cout << "#        1、插入排序       #" << endl;
						cout << "#                          #" << endl;
						cout << "#        2、选择排序       #" << endl;
						cout << "#                          #" << endl;
						cout << "#        3、冒泡排序       #" << endl;
						cout << "#                          #" << endl;
						cout << "#        4、所有排序       #" << endl;
						cout << "#                          #" << endl;
						cout << "#        0、返回上层       #" << endl;
						cout << "#                          #" << endl;
						cout << "############################" << endl;
						while (1) {    //防止输入错误指令
							cout << "#请输入对应指令：";
							cin >> order1;
							if(order1 < 0 || order1 > 4){
								cout << "#输入指令错误请重新输入。" << endl;
								continue;
							}
							break;
						}
						switch (order1) {
							case 1://插入排序
								int order11,flag11;
								cout << "#1.直接插入排序" << endl << "#2.折半插入排序" << endl <<"请选择：";
								cin >> flag11;
								if(flag11 != 1){
									st.insertSort(rt);
								}else{
									st.binInsertSort(rt);
								}
								break;
							case 2://选择排序
								st.selectSort(rt);
								break;
							case 3://冒泡排序
								st.bubbleSort(rt);
								break;
							case 4://所有排序
								memcpy(rt,r,sizeof(r));
								cout << "直接插入排序：" << endl;
								st.insertSort(rt);
								cout << endl << endl;
								memcpy(rt,r,sizeof(r));
								cout << "折半插入排序：" << endl;
								st.binInsertSort(rt);
								cout << endl << endl;
								memcpy(rt,r,sizeof(r));
								cout << "选择排序：" << endl;
								st.binInsertSort(rt);
								cout << endl << endl;
								memcpy(rt,r,sizeof(r));
								cout << "冒泡排序：" << endl;
								st.bubbleSort(rt);
								cout << endl << endl;
								break;
							case 0:
								flag1 = 0;
							}
						}
					}
					break;
                case 3://纸牌游戏
					{
						Card card;
					}
                    break;
				case 0:
					return 0;
				 }
			 }
//    int a[5] = {10,3,1,41,5};
//    Sorts st(5);
//    st.insertSort(a);
//    st.binInsertSort(a);
//    st.bubbleSort(a);
//    st.selectSort(a);
//    system("cls");
//    Card card;
    return 0;
}
