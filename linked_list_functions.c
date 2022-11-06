// Iterative C program to find length or count of nodes in a linked list
#include<stdio.h>
#include<stdlib.h>
 
/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};
 
/* Given a reference (pointer to pointer) to the head
  of a list and an int, push a new node on the front
  of the list. */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
void delete(int pos)
{
    struct node *temp = head;       // Creating a temporary variable pointing to head
    int i;                    
    if(pos==0)
    {
        printf("\nElement deleted is : %d\n",temp->data);
        head=head->next;        // Advancing the head pointer
        temp->next=NULL;
        free(temp);             // Node is deleted
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        // Now temp pointer points to the previous node of the node to be deleted
        struct node *del =temp->next;       // del pointer points to the node to be deleted
        temp->next=temp->next->next;
        printf("\nElement deleted is : %d\n",del->data);      
        del->next=NULL;
        free(del);                          // Node is deleted
    }
    printf("\nUpdated Linked List is : \n");
    display_List();
    return ;
}

 
void insert(int value)
{
    struct node *newnode;  // Creating a new node
    newnode = (struct node *)malloc(sizeof(struct node)); // Allocating dynamic memory
 
    newnode->data = value;      // Assigning value to newnode
    newnode->next = NULL;    
 
    if(head==NULL)      // Checking if List is empty
    {
        head = newnode;
        tail = newnode;
    }
    else                // If not empty then...
    {
        tail->next=newnode;    
        tail=newnode;       // Updating the tail node with each insertion
    }
    return ;
}
 
 
/* Counts no. of nodes in linked list */
int getCount(struct Node* head)
{
    int count = 0;  // Initialize count
    struct Node* current = head;  // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
 
/* Driver program to test count function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    /* Use push() to construct below list
     1->2->1->3->1  */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
 
    /* Check the count function */
    printf("count of nodes is %d", getCount(head));
    return 0;
}