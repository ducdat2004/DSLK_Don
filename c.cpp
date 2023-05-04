#include <iostream>
#include <string>
using namespace std;

struct node 
{
	int  data;
	node *next;
};
node *head = NULL;
void choose(string s)
{
	int tong = 0;
	for(int i = 0; i < s.length(); i++)
	{
		tong += s[i];
	}
	switch(tong)
	{
		
		case 319: 
			{
				for(node *i = head; i != NULL; i = i -> next)
				{
					cout << i -> data << " ";
				}
			}
		case 347:
			{
				for(node *i = head; i != NULL; i = i -> next)
				{
					for(node *j = i -> next; j != NULL; j = j -> next)
						swap(i -> data, j -> data);
				}
			}
	}
}
node *taonode(int data)
{
	node *p = new node;
	p -> data = data;
	p -> next = head;
	head = p;
	return p;
}

void print(node *pHead)
{
	pHead = head;
	while(pHead != NULL)
	{
	
			cout << pHead -> data << endl;			
		
		pHead = pHead -> next;	
	}
}

int main()
{
	int data;
	while
	string s;
	while(s != "end")
	{
		cin >> s;
		cin.ignore();
		choose(s);
	}
	node *p = head;
	print(p);
}

