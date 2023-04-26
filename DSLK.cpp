#include <bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	Node * next;	
};

Node *TaoPT(int n)
{
	Node * ptr = new Node();
	ptr -> data = n;
	ptr -> next = NULL;
	return ptr;
}

main()
{
	int n;
	do
	{
		cin >> n;
		if(n != NULL)
		{
			TaoPT(n);
		}
	}while(n != NULL);
	Node * ptr;
	while(ptr != NULL)
	{
		cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
		
	
}

