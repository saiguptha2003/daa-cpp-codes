/*
name: V D Panduranga Sai Guptha
date:29/09/2022
*/
#include<iostream>
using namespace std;
class node
{
     public:
     int data;
     node* next;
};
void pushatbeg(node **head,int data)
{
     node *new_node=new node;
     new_node->data=data;
     new_node->next=*head;
     *head=new_node;
}
void pophead(node **head)
{
     if(*head==NULL)
     {
          return;
     }
     else
     {
          node *temp=*head;
          (*head)=(*head)->next;
          delete(temp);
          return;
     }
}
void popviakey(node **head,int data)
{
     node *current=*head;
     node *temp=NULL;
     if((*head)->data==data)
     {
          temp=*head;
          *head=(*head)->next;
          delete(temp);
     }
     else{
          while(current->next!=NULL)
          {
               if(current->next->data==data)
               {
                    temp=current->next;
                    current->next=current->next->next;
                    delete(temp);
                    break;
               }
               current=current->next;
          }
     }
}
void popviaindex(node **head,int index)
{
     node *temp=*head;
     if(index==0)
     {
          temp=*head;
          (*head)=(*head)->next;
          delete(temp);
     }
     else{
           node *current=new node;
          current=*head;
          int i=1;
          while(current->next!=NULL)
          { 
               if(index==i)
               {
                    temp=current->next;
                    current->next=current->next->next;
                    delete(temp);
                    break;
               }
               current=current->next;
               i++;
          }

     }
}
void print(node *head)
{
     cout<<"[ ";
     while(head!=NULL)
     {
          cout<<head->data<<" ";
          head=head->next;
     }
     cout<<"]"<<endl;
}
void pushatend(node **head,int data)
{
     node *new_node=new node;
     new_node->data=data;
     new_node->next=NULL;
     node *last=NULL;
     last=*head;
     if(*head==NULL)
     {
          *head=new_node;
          return;
     }
          while(last->next!=NULL)
          {
               last=last->next;
          }
          last->next=new_node;
          return;
}
void pushAtindex(node **head,int index,int data)
{
     node *newnode;
     newnode->data=data;
     newnode->next=NULL;
     node *current=*head;
     int i=0;
     while(current->next!=NULL)
     {
          if(index-1==i)
          {
               node *temp=current->next->next;
               current->next=newnode;
               newnode->next=temp;
               break;
          }
          current=current->next;
          i++;
     }
}
int main()
{
     node *head=NULL;
     int n;
     cin>>n;
     for(int  i=0;i<n;i++)
     {
          int x;
          cin>>x;
          pushatend(&head,x);
     }
     cout<<"before delete :";
     print(head);
     cout<<"after adding  :";
     popviaindex(&head,3);
     popkey(&head,90);
     pophead(&head);
    pushAtindex(&head,3,98);
     print(head);

     
}