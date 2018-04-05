#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//题目描述
/*
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤1000），
对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，
按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
*/
//思路就是先排序后去重，排序可以利用库函数sort(),网上提供了一种巧妙的思路，利用标签法，具体如下
int main ()
{
	int num;
	int s[1000], s1[1000];
	while(cin>>num)		//这边需要注意一下，因为有不止一组测试用例，所以需要不断的输入，第一次代码只输入了一次，所以没有通过
	{
			int j=0;
		for(int i = 0; i < num; i++)
		{
			cin>>s[i];
		}

		sort(s,s+num);

		for(int i = 0; i < num; i++)
		{
			if(s[i+1]!=s[i])
				s1[j++]=s[i];
		}

		for(int i = 0; i < j; i++)
		{
			cout<<s1[i]<<endl;
		}
	}
	
	system("pause");
	return 0;

}

/* 网上提供的思路
#include <iostream>
using namespace std;
int main() {
    int N, n;
    while (cin >> N) {
        int a[1001] = { 0 };
        while (N--) {
            cin >> n;
            a[n] = 1;
        }
        for (int i = 0; i < 1001; i++)
            if (a[i])
                cout << i << endl;
    }
    return 0;
} */