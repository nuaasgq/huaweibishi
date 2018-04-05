#include<iostream>
using namespace std;
//题目描述
/*
功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）

最后一个数后面也要有空格
*/
//解题思路：从最小的数开始，不断的将当前最小的质数因子剔除。
int main()
{
	int n,i=2;
	cin>>n;
	while(i<=n)
	{
		while(n%i==0)
        {
            cout<<i<<' ';
			n=n/i;
        }
			++i;
	}
}