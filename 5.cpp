#include <iostream>
#include <string>
#include<math.h>
using namespace std;

//题目描述
/*
写出一个程序，接受一个十六进制的数值字符串，输出该数值的十进制字符串。（多组同时输入 ）
*/
//解题思路：利用输入输出流的进制转换功能，其中hex十六进制，dec十进制，oct八进制，bin二进制
int main ()
{
	int first;
    while(cin>> hex >>first)
    {
        cout << dec<< first<< endl;
    }
	system("pause");
	return 0;

}