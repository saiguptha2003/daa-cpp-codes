#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* Next;
	int node_id;
};
node* head = new node();
void create_head(int data) {
	
	head->data = data;
	head->Next = NULL;
	head->node_id = 1;

}
void insert_front(node** H, int data) {
	node* NewNode = new node();
	NewNode->data = data;
	NewNode->Next = *H;
	*H = NewNode; 
}
void insert_last(node** H, int data)
{
	node* NewNode = new node();
	NewNode->data = data;
	NewNode->Next = NULL;
	if (*H == NULL)
	{
		*H = NewNode;
		return;
	}
	node* last = *H;
	while (last->Next!=NULL)
	{
		last = last->Next;
	}
	last->Next = NewNode;
}
void print(node* Head)
{
	int i = 1;
	while (Head!= NULL)
	{
		
		cout << Head->data <<" " <<i<< endl;
		Head = Head->Next;
		i++;
	}
}

int main()
{	
	create_head(34);
	insert_last(&head, 53);
	insert_last(&head, 76);
	print(head);
	return 0;

}