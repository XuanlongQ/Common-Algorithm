例题1

题意：输入一个正整数n，按从小到大的顺序输出形如a/b=n的表达式，其中100<=a<=999，2<=n<=79，且b必须是素数。
思路：a和n的范围都很小，我们可以使用枚举，代码如下：

#include <iostream>
#include <algorithm>

using namespace std;

bool check(int x);

int main()
{
	int n;
	while(cin >> n)
	{
		for (int a = 100;a<=999;a++)
		{
			for (int b =1;b < a;b++)
			{
				if (check(b) && a%b == 0 && a/b == n)
				{
					cout << a << "/" << b << "=" << n << endl;
				}
			}
		}
	}

	return 0;
}

bool check(int x)
{
	bool flag = true;
	for (int i =2 ;i*i<= x;i++)
	{
		if(x%i==0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
