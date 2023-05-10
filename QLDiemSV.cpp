#include <bits/stdc++.h>
#include <string>
using namespace std;

struct sv
{
	string name;
	int marks;
};

struct node 
{
	sv data;
	node *next;
};

node *head = NULL;

node *insertFist(string name, int marks)
{
	node *p = new node;
	p -> data.name = name;
	p -> data.marks = marks;
	p -> next = head;
	head = p;
	return p;
}



void Delete()
{
	if(head == NULL)
		return;
	node *temp = head;
	head = head -> next;
	delete temp;
	return;
}

int Count(int vmarks)
{
	int dem = 0;
	for(node *i = head; i != NULL; i = i -> next)
	{
		if(vmarks != i -> data.marks)
		{
			dem++;			
		}
	}
	return dem;
}
int main()
{
	
	while(true)
	{
		string choose;
		cin >> choose;
	    int as = 0;
		for(int i = 0; i < choose.length(); i++)
		{
			as += choose[i];
		}
		switch(as)
		{
			case 330:
				{
					string name;
					int marks;	
					cin >> name;
					cin >> marks;
					node *p = insertFist(name, marks);
					break;
				}
			case 309:
				{
					Delete();
					break; 
				}
			case 553:
				{
					int vmarks;
					cin >> vmarks;
					cout << Count(vmarks) << endl;
					break;
				}
		}
		if(choose == "fin")
			break;
	}
}
