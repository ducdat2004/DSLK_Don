#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;	
};
Node *head = NULL;
Node *tail = NULL;
Node *TaoNode(int data)
{
	Node *p = new Node;
	p -> data = data;
	p -> next = NULL;
	return p;
}

void InsertLast(Node *p)
{
	if(head == NULL)
	{
		head = p;
		tail = p;
	}
	else
	{
		tail -> next = p;
		tail = p;
	}
}

long long Sum()
{
	long long tong = 0;
	for(Node *i = head; i != NULL; i = i -> next)
	{
		tong += i -> data;
	}
	return tong;
}

//void Delete(int pos)
//{
//	int dem = 0;
//	
//	
//	Node *prev = head;
//	Node *next = head -> next;
//	if(pos == 1)
//	{
//		head = head -> next;
//		delete prev;
//		return;
//	}
//	while(next != NULL)
//	{
//		prev = next;
//		next = next -> next;
//		dem ++;	
//		if(dem == pos)
//		{
//			break;
//		}
//	}
//	prev -> next = next -> next;
//	delete next;
//}
void Delete(int pos)
{
    if (pos <= 0 || head == NULL)
        return;

    if (pos == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* prev = head;
    Node* current = head->next;
    int count = 2; // V? trí hi?n t?i dã là 2 vì dã ki?m tra pos == 1 ? trên

    while (current != NULL && count < pos)
    {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == NULL)
        return; // V? trí vu?t quá s? ph?n t? trong danh sách

    prev->next = current->next;
    delete current;
}
int main()
{
	int data;
	int sopt;
	cin >> sopt;
	for(int i = 0; i < sopt; i++)
	{
		cin >> data;
		Node *p = TaoNode(data);
		InsertLast(p);
	}
	
	while(true)
	{
		char choose;
		cin >> choose;
		int stop = 1;
		switch(choose)
		{
			case 105: 
			{
				int x;
				cin >> x;
				Node *p = TaoNode(x);
				InsertLast(p);
				break;
			}
			case 115:
			{
				cout << Sum() << endl;
				break;		
			}
			case 48:
			{
				cin >> stop;
				break;
			}
			case 100: 
			{
				int pos;
				cin >> pos;
				Delete(pos);
				break; 
			}
		}	
		if(stop == 0)
		{
			break;	
		}	
	}
}
