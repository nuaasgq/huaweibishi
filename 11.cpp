#include <iostream>
using namespace std;

//题目描述
/*
输入一个整数，将这个整数以字符串的形式逆序输出

程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
*/
//解题思路：取余法逐个输出
int main ()
{
	int n;
	cin>>n;
	while(n%10)
	{
		cout<<n%10;
        n=n/10;
	}

	system("pause");
	return 0;

}