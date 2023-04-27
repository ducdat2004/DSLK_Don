#include <iostream>
#include <string>
using namespace std;

typedef struct NhanVien
{
	string sdt, email, hoten;
}nv;

struct node
{
	nv data;
	node *next;
};

struct list 
{
	node *dau = NULL;
	node *duoi = NULL;
};

node *taonode(string a, string b, string c)
{
	node *p = new node;
	p -> data.hoten = a;
	p -> data.sdt = b;
	p -> data.email = c;
	p -> next = NULL;
}

void chendau(list &l, node*p)
{
	if(l.dau == NULL)
	{
		l.dau = p;
	}
	else
	{
		p -> next = l.dau;
		l.dau = p;
	}
}

void in(node *p)
{
	cout << "Danh sach da nhap: " << endl;
	while(p != NULL)
	{
		cout << "Hoten: " << p -> data.hoten << endl << "So dien thoai: " << p -> data.sdt << endl << "Dia chi email: " << p -> data.email << endl;
		p = p -> next;		
	}
}

int main()
{
	string hoten, sdt, email;
	list l;
	while(true)
	{
		getline(cin, hoten);
		if(hoten.length() != 0)
		{
			cin >> sdt;
			cin.ignore();
			getline(cin, email);
		}
		else
		{
			break;
		}
		node *p = taonode(hoten, sdt, email);
		chendau(l, p);					
	}
	node *ptr = l.dau;
	in(ptr);	
}
