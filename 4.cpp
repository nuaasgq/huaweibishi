#include <iostream>
#include <string>
#include<math.h>
using namespace std;

//题目描述
/*
连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组； 
长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
*/
//思路：先补0，后输出，逢8换行
int main ()
{
	string s1,s2;
	cin>>s1>>s2;
	int num1,num2;
	num1=s1.size();
	num2=s2.size();
	int Newnum1=ceil(double(num1)/8)*8;
	int Newnum2=ceil(double( num2)/8)*8;

	for(int i=0;i<Newnum1;i++)
	{
		if(i<num1)
			cout<<s1[i];
		else
			cout<<0;
		if((i+1)%8==0)
			cout<<endl;
	}

		for(int i=0;i<Newnum2;i++)
	{
		if(i<num2)
			cout<<s2[i];
		else
			cout<<0;
		if((i+1)%8==0)
			cout<<endl;
	}
	system("pause");
	return 0;

}