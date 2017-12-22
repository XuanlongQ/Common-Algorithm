
首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
以此类推，直到所有元素均排序完毕。

#include <iostream>

using namespace std;

void swap(int &a,int &b);

int main()
{
	int a[] = {4,5,6,1,2,3};
	int len = sizeof(a)/sizeof(a[0]);


	for (int i = 0;i < len;i++)
	{
		int Min = i;
		for (int j = i+1 ; j < len;j++)
		{
			if (a[Min] > a[j])
			{
				Min = j;
			}

			if (Min != i)
			{
				swap(a[i],a[Min]);
			}
			//cout << a[j] << endl;
		}

		cout << a[i] << endl;
	}

	return 0;
}

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
