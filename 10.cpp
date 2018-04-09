#include <iostream>
#include <string>
using namespace std;

//题目描述
/*
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)。不在范围内的不作统计。
*/
//解题思路：对所有出现的字符进行统计即可，用1来标识该字符是否出现过
int main ()
{
	string s;
	cin>>s;
	int a[128]={0},num=0;
	for(string::iterator i=s.begin();i<s.end();i++)
	{
		a[int(*i)]=1;
	}
	for(int j=0;j<128;j++)
	{
		if(a[j])
			num+=1;
	}
	cout<<num;
	system("pause");
	return 0;

}