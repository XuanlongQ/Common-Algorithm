冒泡排序是一种简单的排序算法。它重复地走访过要排序的数列，一次比较两个元素，如果他们的顺序错误就把他们交换过来。
走访数列的工作是重复地进行直到没有再需要交换，也就是说该数列已经排序完成。
#include <iostream>

using namespace std;

int main()
{
	int a[] = {4,5,6,1,2,3};
	int len = sizeof(a)/sizeof(a[0]);
	

	for (int i=0;i< len;i++)
	{
		for (int j = i; j < len; j++)
		{
			if (a[j] > a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
		cout << a[i] << endl;
		
	}


	return 0;
}

