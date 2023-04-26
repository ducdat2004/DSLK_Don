#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct QuanLyHocPhan
{
    string mahp;
    string tenhp;
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
    node *p = (node*)malloc(sizeof(node));
    p->data.mahp = a;
    p->data.tenhp = b;
    p->data.sotc = c;
    p->next = NULL;
    return p;
}

void chendau(list &l, node *p)
{
    if (l.dau == NULL)
    {
        l.dau = p;
    }
    else
    {
        p->next = l.dau;
        l.dau = p;
    }
}

bool checkRong(string a)
{
    return a.empty() || a.find_first_not_of(' ') == string::npos;
}

int main()
{
    list l;
    string a, b;
    int c;
    while (true)
    {
        cout << "Nhap ma hoc phan, ten hoc phan: " << endl;
        getline(cin, a);
        if (checkRong(a))
            break;
        getline(cin, b);
        cout << "Nhap so TC: " << endl;
        cin >> c;
        cin.ignore();
        node *p = taonode(a, b, c);
        chendau(l, p);
    }

}

