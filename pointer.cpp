#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5];
	printf("%d\n", &a);
	int * ptr = a;
	for(int i = 0; i < 5; i++)
	{
		cin >> *(ptr + i);
	}
//	for(int i = 0; i < 5; i++)
//	{
//		printf("%d ", *ptr + i);
//	}
	cout << endl;
	for(int i = 0; i < 5; i++)
	{
		//cout << *(ptr + i) << " ";
		cout << ptr[i] << " ";
	}
	int s = 5;
	int *p = &s;
	cout << endl << *(p);
}
