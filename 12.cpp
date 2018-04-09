#include <iostream>
#include<string>
using namespace std;

//题目描述
/*
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。
*/
//逆向输出数组
int main ()
{
	string s;
	cin>>s;
	for(int i=s.size()-1;i>=0;i--)
	{
		cout<<s[i];
	}

	system("pause");
	return 0;

}