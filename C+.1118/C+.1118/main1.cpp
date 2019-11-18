#include <iostream>
using namespace std;

//二进制数字连续数字1最长长度
int max_cur()
{
	int n;
	cin >> n;

	int max = 0;

	while (n)
	{
		int count = 0;
		while ((n & 1) == 1)
		{
			count++;
			n = n >> 1;
		}
		max = (count > max) ? count : max;
		n = n >> 1;
	}
	return max;
}

int main()
{
	int M_b = max_cur();
	cout << M_b << endl;

	system("pause");
	return 0;
}
