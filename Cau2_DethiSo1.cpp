#include <bits/stdc++.h>
using namespace std;
struct HocPhan
{
	char maHP, tenHP;
	int soTC;	
};

struct Node
{
	HocPhan a;
	Node * next;	
};
Node * F = NULL;
Node * Tao(char a, char b, int c)
{
	Node * ptr = new Node();
	ptr -> a.maHP = a;
	ptr -> a.tenHP = b;
	ptr -> a.soTC = c;
	ptr -> next = NULL;
	return ptr;
}
void inDS(Node * F)
{
	Node * p = F;
	F = p;
	while(p != NULL)
	{
		cout << p -> a.soTC << " ";
		p = p -> next;
	}
}
main()
{
	Node * F = NULL;
	char a, b;
	int c;
	do
	{
		cin >> a >> b >> c;
		Tao(a, b, c);	
	}while(a != NULL);
	inDS(F);
	
	
}

