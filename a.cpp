#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct node 
{
	string name;
	node *next;
};
node *head = NULL;
node *taonode(string name)
{
	node *p = new node;
	p -> name = name;
	p -> next = head;
	head = p;
	return p;
}

void print(node *pHead)
{
	while(pHead != NULL)
	{
	
			cout << pHead -> name << endl;			
		
		pHead = pHead -> next;	
	}
}

void sort(node *&p)
{
	p = head;
	for(node *i = p; i != NULL; i = i -> next)
	{
		for(node *j = i -> next; j != NULL; j = j -> next)
		{
			if(i -> name > j -> name)
			{
				swap(i -> name, j -> name);	
			}			
		}
	}
}

void ktt()
{
	
	for(node *i = head; i != NULL; i = i -> next)
	{
		for(int j = 0; j < i -> name.length(); j++)
		{
			if(i -> name[j] == ' ' && i -> name[j + 1] != ' ')
			{
				i -> name[j + 1] -= 32;
			}
		}
	}
}

//void daotu()
//{
//	for(node *i = head; i != NULL; i = i -> next)
//	{
//		
//	}
//}
int main()
{
	string name;
	
	while(true)
	{		
		getline(cin, name);
		if(name != "***")
		{		
			node *p = taonode(name);	
		}	
		else
			break;	
	}
	node *pHead = head;
	node *ptr = head;
	node *p = head;
	sort(ptr);
	ktt();
	print(pHead);
}


