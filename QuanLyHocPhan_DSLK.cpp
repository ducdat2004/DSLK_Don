#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct QuanLyHocPhan
{
//    char *mahp = (char*)malloc(20);
//    char *tenhp = (char*)malloc(20);
	string mahp, tenhp;
    int sotc;
};
typedef struct QuanLyHocPhan hp;
struct node
{
    hp data;
    node *next;
};
struct list 
{
	node *dau = NULL;
	node *duoi = NULL;;
};
node *taonode(string a, string b, int c)
{
    node *p = new node;
//    strcpy(p->data.mahp, a);  // sao chép giá tri cua a vào con tro mahp
//    strcpy(p->data.tenhp, b); // sao chép giá tri cua b vào con tro tenhp
    p -> data.mahp = a;
    p -> data.tenhp = b;
	p -> data.sotc = c;
    p -> next = NULL;
    return p;
}

void chendau(list &l, node *p)
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

void chencuoi(list &l, node *p)
{
	if(l.dau == NULL)
	{
		l.duoi = p;
	}
	else
	{
		l.duoi -> next = p;
		l.duoi = l.duoi -> next;
	}
}
void in(node *p)
{
	int i = 0;
	cout << "\tDanh sach da nhap: \n" << endl;
	while (p != NULL)
    {
    	++i;
        cout << "Ma hp [" << i << "]: " << p -> data.mahp << endl << "Ten hoc phan [" << i << "]: "<< p -> data.tenhp << endl <<  "so tc [" << i << "]: "<< p ->data.sotc << endl;
        if(p != NULL)
			cout << "------------------------------\n";
		p = p -> next;
    }
}

void in2(node *p)
{
	int i = 0;
	cout << "\tDanh sach sau khi bo sung: \n" << endl;
	while (p != NULL)
    {
    	++i;
        cout << "Ma hp [" << i << "]: " << p -> data.mahp << endl << "Ten hoc phan [" << i << "]: "<< p -> data.tenhp << endl <<  "so tc [" << i << "]: "<< p ->data.sotc << endl;
        if(p != NULL)
			cout << "----------------------------\n";
		p = p -> next;
    }
}
void add(list &l)
{

}
int main()
{
	list l;
//    char *a = (char*)malloc(20);
//    char *b = (char*)malloc(20);
	string a = "a",b;
    int c;
    while(a.size() != 0)
    {
        cout << "Nhap ma hoc phan, ten hoc phan: " << endl;
        getline(cin, a);       
        if(a.empty())
        	break;
		getline(cin, b);
        cout << "Nhap so TC: " << endl;
        cin >> c;
    	cin.ignore();    
        node *p = taonode(a, b, c);
        chendau(l, p);       
    }
    node *inn = l.dau;
    node *innn= l.dau;
    node *lastnode = NULL;
    in(inn);
	
	string mahpA, tenhpA;
    int sotcA;
    cout << endl << "\tNhap hoc phan can bo sung: \n" << endl;
	cout << "Nhap maHP: ";
	getline(cin, mahpA);
	cout << "Nhap tenHP: ";
	getline(cin, tenhpA);
	cout << "Nhap soTC: ";
	cin >> sotcA;
	node *p = taonode(mahpA, tenhpA, sotcA);
	int dem = 0;
	while(l.dau != NULL)
	{
		if(p -> data.mahp == l.dau -> data.mahp)
		{
			dem++;
		}
		l.dau = l.dau -> next;
	}
	if(dem == 0)
	{
		in2(inn);
		cout << "Ma hp: " << p -> data.mahp << endl << "Ten hoc phan: " << p -> data.tenhp << endl << "So tc: " << p -> data.sotc << endl;	
	}
	else
		cout << "Hoc phan da ton tai";
}
