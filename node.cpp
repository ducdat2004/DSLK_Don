#include <iostream>
using namespace std;
struct hp
{
	string mahp, tenhp;
	int sotc;
};

struct Node
{
	hp data;
	Node *next;	
};

struct list
{
	Node *dau;
	Node *duoi;
};

void tao(list &l)
{
	l.dau = NULL;
	l.duoi = NULL;
}

void taonode(string mahp, string tenhp, int sotc)
{
	Node *p = new Node;
	p -> data.mahp = mahp;
	p -> data.tenhp = tenhp;
	p -> data.sotc = sotc;
	p -> next = NULL;
}

void InsertLast(list l, Node *p)
{
	if(l.dau == NULL)
	{
		l.dau = l.duoi = p;
	}
	else
	{
		l.duoi -> next = p;
		l.duoi = p;
	}
}

void in(list l)
{
	for(Node *i = l.dau; i != NULL; i = i -> next)
	{
		cout << "Danh sach cac Hoc phan da nhap la: \n";
		cout << l.dau -> data.mahp << "|" << l.dau -> data.tenhp << "|" << l.dau -> data.sotc << "|" << endl;
	}
}
int main()
{
	list l;
	int n, sotc;
	string mahp, tenhp;
	cout << "Nhap so hoc phan can quan ly: ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap ma Hoc phan: ";
		cin >> mahp;
		cout << "Nhap ten Hoc phan :";
		cin >> mahp;
		cout << "Nhap so TC: ";
		cin >> sotc;
		Node *F;
		taonode(mahp, tenhp, sotc);
		
		InsertLast(l, F);
	}
	in(l);
}
