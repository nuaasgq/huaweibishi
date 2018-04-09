#include <iostream>
using namespace std;

//题目描述
/*
输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
*/
//解题思路：从右往左提取数字，因为不重复，一共只有10个数字，用一个长度为10的一维数字统计每种数字的出现次数，如果第一次出现就打印
int main ()
{
	int n,a[1000],b[10]={0};
	cin>>n;
	int i=0;
	while(n%10)
	{
		b[n%10]+=1;
		if(1==b[n%10])
			cout<<n%10;
		n=n/10;
	}

	system("pause");
	return 0;

}