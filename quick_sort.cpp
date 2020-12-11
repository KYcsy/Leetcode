//
//  quick_sort.cpp
//  快速排序
//
//  Created by 陈淑仪 on 2020/11/28.
//


#include <stdio.h>

int main(void) {
    
    printf("请输入要排序的数字\n");
    return 0;
}

class Quick_Sort{
    int arr;
public: Quick_Sort(int[] arr){
    this->arr=arr;
    }
void quick_sort(int s[],int begin,int end)//l为第一个数的下标，r为最后一个数的下标
{
    int i=begin,j=end;
    int x=s[i];//基准点
    while (i<j)
    {
        //从右向左找比x小的数
        while (i<j && s[j]>=x) {
            j--;
        }
        //找到比x小的数之后
        if (i<j) {
            s[i]=s[j];//将第j个数填充到第i个位置里
            i++;
        }
        
        //从左向右找比x大的数
        while (i<j && s[i]<x) {
            i++;
        }
        //找到比x大的数之后
        if (i<j) {
            s[j]=s[i];//将第i个数填充到第j个位置里
            j--;
        }
    }
    //i=j时，跳出while语句
    s[i]=x;
    quick_sort(s, begin, i-1);//递归调用基准点前面的数
    quick_sort(s, i+1, end);//递归调用基准点后面的数
}


}
