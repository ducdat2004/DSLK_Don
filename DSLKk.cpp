#include <iostream>
#include <stdlib.h>
using namespace std;

struct HocPhan
{
    char  maHP, tenHP;
    int soTC;
};

struct Node
{
    HocPhan data;
    Node *next;
};

Node *create(char a, char b,  int c)
{
    Node *p = (Node *)malloc(sizeof(Node));
    
    p -> data.soTC = c;
    p -> next = NULL;
    return p;
}

void BoSungDau(Node * p, Node  * *F) //Bo sung ptu p vao danh sach quan ly boi con tro F
{
	if(*F == NULL)
	{
		*F = p;
	}
	else
	{
		p -> next = *F;
		*F = p;
	}
}

void BoSungDau_2(Node * p, Node *& F)
{
    p -> next = F;
    F = p;
    
  
}

void inDS(Node * F)
{
    Node * p = F;
    F = p;
    while (p != NULL)
    {
        cout << p -> data.maHP << "|" << p ->data.soTC << " | " << p ->data.tenHP << endl;
        p = p -> next;
    }
    
}
int main()
{
    Node * F = NULL;
    char a, b;
    int c;
    do
    {
        cin >> a >> b >>  c;
        Node *p = create(a,b,c);
        BoSungDau_2(p, F);
    } while(c != 3);
    // inDS(F);
    while (F != NULL)
    {
        cout << endl << "Danh sach da nhap la \n" << F -> data.soTC << F -> data.maHP << F ->data.tenHP << endl;
        F = F -> next;
    }
    return 0;
}
