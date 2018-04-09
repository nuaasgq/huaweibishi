#include <iostream>
using namespace std;

//题目描述
/*
数据表记录包含表索引和数值，请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。
*/
//创建一个二维数组来保存数据，再创建一个二维数组按照索引来合并相同记录，输出时自动排序完成。
//总结：以空间换时间
int main ()
{
	int a[1000][2],num,b[1000][2]={0};
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	for(int j=0;j<num;j++)
	{
		int temp=a[j][0];
		b[temp][0]=1;
		b[temp][1]+=a[j][1];
	}
	for(int i=0;i<1000;i++)
	{
		if(b[i][0])
			cout<<i<<' '<<b[i][1]<<endl;
	}

	system("pause");
	return 0;

}