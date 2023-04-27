//Ham tim kiem:
//	node *timkiem(node *head, int x)
//	{
//		node *p = head;
//		while(p != NULL)
//		{
//			if(p -> so == x)
//			{
//				return p;
//			}
//			p = p -> next
//		}
//	}


void xoa(node *&)
{
	p ->next = q ->next;
	q ->next = p;
	delete q;
}
