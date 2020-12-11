```c++
//
//  main.cpp
//  searching
//  二分查找
//  要求：打印出比较次数以及返回查询的数字是否在数组里
//  Created by 陈淑仪 on 2020/12/8.
//

#include <stdio.h>
#include <iostream>
#include<assert.h>
#include <stdlib.h>
#include<vector>

using namespace std;

int BinarySearch(int a[],int target,int size);

int main(int argc, const char * argv[]) {
    cout<<"请输入一串有序数组"<<endl;
    int number;
    int target;
    vector<int> vec;//定义一个vector数组array
    
    while (1) {
        cin >> number;
        vec.push_back(number);//每输入一个数字就把它添加到数组的最后
        if (cin.get() == '\n')//如果是回车符则跳出循环
        break;
    }
    
    int len = vec.size();//返回数组长度为len
    int array[len];
    for (int n=0; n<len; n++) {
        array[n]=vec[n];
    }
    int size = sizeof(array) / sizeof(int);//记录排序数组的长度
    cout<<"请输入待查找的数字"<<endl;
    cin>>target;
    cout<<BinarySearch(array,target,size)<<endl;
    return 0;
}




int BinarySearch(int a[],int target,int size)
    {
        int left=0;
        int right=size;
        int comp=0;
        
        while (left<right) {
            int mid=(left+right)/2;
            if (left==size) {
                return -1;
            }
            
            if (target==a[mid]) {
                comp++;
                cout<<"是"<<endl;
                cout<<"比较次数为";
                return comp;
            }
            
            else if (target<a[mid])
            {
                comp++;
                right=mid;
            }
            
            else if (target>a[mid])
            {
                comp++;
                left=mid+1;
            }
        }
        cout<<"否"<<endl;
        cout<<"比较次数为";
        return comp;
        
    }
    



```

