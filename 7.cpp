#include <iostream>
#include <math.h>
using namespace std;
//题目描述
/*
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。
*/
//解题思路：先向下取整，再根据小数点后面的数值大小决定四舍五入。
 int main ( )
 {
    double a;
     cin>>a;
     int b=floor(a);
     if((a-b)>=0.5)
         b+=1;
     cout<<b;
     system("pause");
     return 0;
 }