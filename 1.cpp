#include <iostream>
#include <string>
using namespace std;

//计算字符串最后一个单词的长度，单词以空格隔开。
//思路就是利用容器的迭代器来反向读取
int main ()
{
	string s;
	getline(cin,s);
	int num = 0;
	for(string::iterator i = s.end()-1;i != s.begin()-1 && *i!=' '; i--)//这里值得注意的是.begin()函数返回的是容器的首元素位置，.end()返回的是容器的尾元素的后一个位置
	{
		num++;
	}
	cout<<num;
	system("pause");
    return 0;

}