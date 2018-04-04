#include <iostream>
#include <string>
using namespace std;

//题目描述
//写出一个程序，接受一个有字母和数字以及空格组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
//思路：利用ASSIC码的特性
int main ()
{
	string s;
	char c;
	getline(cin,s);
	cin>>c;
	int num=0;
	for(string::iterator i=s.begin();i != s.end() ; i++)
	{
		if(c==*i || c==*i-32 || c==*i+32)
			num++;
	}
	cout<<num;
	system("pause");
	return 0;

}