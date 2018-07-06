//
//  Sorts.hpp
//  sjjg
//
//  Created by 颜允锋 on 2018/7/3.
//  Copyright © 2018年 颜允锋. All rights reserved.
//

#ifndef Sorts_hpp
#define Sorts_hpp

#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
class Sorts{
    int n;
public:
    Sorts(int n);
    //插入排序
        //直接插入排序
    void insertSort(int r[]);
        //折半插入排序
    void binInsertSort(int r[]);
    //选择排序
    void selectSort(int r[]);
    //冒泡改进排序
    void bubbleSort(int r[]);
    //打印整个数组
    void showArray(int r[]);
};
#endif /* Sorts_hpp */
