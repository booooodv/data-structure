//
//  Card.cpp
//  sjjg
//
//  Created by 颜允锋 on 2018/7/3.
//  Copyright © 2018年 颜允锋. All rights reserved.
//

#include "Card.hpp"
Card::Card(){
    for (int i = 0; i < 54; i++) {  //全部初始化为正面（1为正面，0为反面）
        card[i] = 1;
    }
    for (int i = 2; i < 54; i++) {
        for (int j = i; j < 54; j++) {
            if (j % i == 0) {
                card[j] = !card[j];
            }
        }
		system("cls");
        showCard();
		cout << "#现在的基数为：" << i ;
        Sleep(1000);
		
    }
}
void Card::showCard(){
    for (int i = 1; i <= 54; i++) {
        cout << card[i-1] << "\t";
        if (i % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}
