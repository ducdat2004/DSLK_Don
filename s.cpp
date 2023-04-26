#include <iostream>
using namespace std;
struct Node 
{
	int data;
	Node *pNext;
};
typedef struct Node NODE;

struct list
{
	NODE *Dau;
	NODE *Duoi;	
};
typedef struct list LIST;

void Tao(LIST &l)
{
	l.Dau = NULL;
	l.Duoi = NULL;
}

NODE *KhoiTaoNode(int x)
{
	NODE *p = new NODE(); // Cap phat vung nho cho con tro p
	p -> data = x; // Truyen gia tri x vao data
	p -> pNext = NULL; 
	return p;
}

void ThemVaoDau(list &l, Node * p)
{
	if(l.Dau == NULL)
	{
		l.Dau = l.Duoi = p;
	}
	else
	{
		p -> pNext = l.Dau;
		l.Dau = p;
	}
}

void ThemVaoCuoi(list &l, Node * p)
{
	if(l.Dau == NULL)
	{
		l.Dau = l.Duoi = p;
	}
	else
	{
		l.Duoi -> pNext = p;
		l.Duoi = l.Duoi -> pNext;
	}	
}
 
void inDS(list l)
{
//	for(NODE *k = l.Dau; k != NULL; k = k -> pNext)
//	{
//		cout << "\n" << k -> data;
//	}
	while(l.Dau != NULL)
	{
		cout << "\n" << l.Dau -> data;
		l.Dau = l.Dau -> pNext;
	}
}
 main()
{
	list l;
	int n;
	cout << "Nhap so phan tu cua danh sach: ";
	cin >> n;
	int x;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		NODE * p = KhoiTaoNode(x);
		ThemVaoDau(l, p);
	}
	cout << "Danh sach da nhap la\n";
	inDS(l);
}
