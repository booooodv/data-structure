//
//  Sorts.cpp
//  sjjg
//
//  Created by 颜允锋 on 2018/7/3.
//  Copyright © 2018年 颜允锋. All rights reserved.
//

#include "Sorts.hpp"

Sorts::Sorts(int t){
    n = t;
}
//插入排序
//直接插入排序
void Sorts::insertSort(int r[]){
    int tmp,j;
    for (int i = 0; i < n; i++) {
        if(r[i] < r[i-1]){
            tmp = r[i];
            for (j = i - 1;j >= 0 && r[j] > tmp; j--) {
                r[j+1] = r[j];
            }
            r[j+1] = tmp;
        }
        showArray(r);
    }
	system("pause");
}
//折半插入排序
void Sorts::binInsertSort(int r[]){
    int i,j,low,high,mid,tmp;
    for (i = 1; i < n; i++) {
        if(r[i] < r[i-1]){
            tmp = r[i];
            low = 0;
            high = i-1;
            while(low <= high){
                mid = (low + high) / 2;
                if(tmp < r[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            for (j = i-1; j >= high+1;j--) {
                r[j+1] = r[j];
            }
            r[high+1] = tmp;
        }
        showArray(r);
    }
	system("pause");
}
//选择排序
void Sorts::selectSort(int r[]){
    int k;
    for (int i = 0; i < n-1; i++) {
        k = i;
        for (int j = i+1; j < n; j++) {
            if(r[j] < r[k]){
                k = j;
            }
        }
        if(k != i){
            swap(r[i], r[k]);
        }
        showArray(r);
    }
	system("pause");
}
//改进冒泡排序
void Sorts::bubbleSort(int r[]){
    bool exchange;
    for (int i = 0; i < n-1; i++) {
        exchange = false;
        for (int j = n-1; j > i; j--) {
            if(r[j] < r[j-1]){
                swap(r[j], r[j-1]);
                exchange = true;
            }
        }
        if(!exchange){
            return;
        }
        showArray(r);
    }
	system("pause");
}
//打印整个数组
void Sorts::showArray(int r[]){
    for (int i = 0; i < n; i++) {
        cout << r[i] << "\t";
    }
    cout << endl;
	Sleep(1000);
}
