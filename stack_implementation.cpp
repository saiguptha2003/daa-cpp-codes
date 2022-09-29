/*
V D PANDURANGA SAI GUPTHA
SEC B
ISCP
STACK IMPLEMENT
*/
#include<iostream>
using namespace std;
#define MAX 100 //predefined MAX 
int top=-1;

int poped;
int elements=0;
int isfull() //function to check the stack is full
{
     if(top==MAX) //if top is equal to MAX then output is zero
     {
          return 0;
     }
     else {
          return 1;   //if top is not equal to the max then the function return 1;
     }
}

void push(int data,int array[]) //push function to add elements to the stack one upon one 
{
          if(isfull()==0) //checks the stack is empty are full
          {
               cout<<"stack is full"<<endl;//output 
          }
          else{
               top=top+1;//if the stack is full increment to the next index
               array[top]=data;//assign the data whioch is pushed to the stack
          }
          elements++; //variablw to count the elements 
}
void pop()
{
     if(top==-1){//checks the stack is empty or not
          cout<<"stack is empty"<<endl;

     }
     else{
          top=top-1;//decrement the stack top pointer 
          elements--;
     }
}
void print(int array[])
{
     for(int i=0;i<elements;i++)//print function to print the stack elemnts 
     {
          cout<<"array[] is:::"<<array[i]<<endl;
     }
     
}

void topelement(int array[])

{

int data=top;

cout<<"top element:::  "<<array[data]<<endl;

}

int main()
{
     int array[MAX];
     push(54,array);
     push(76,array);
     push(87,array);
     
     pop();
     pop();
     print(array);
     topelement(array);
     return 0;

}