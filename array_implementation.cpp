#include<iostream>
using namespace std;
void insert(int array[],int data,int index,int n)
{
    int s=0;
    for(int i=n-1;i>=index;i--)
    {
        array[i+1]=array[i];
    }
    array[index]=data;
        n++;
}
void deleted(int array[],int data,int n)
{
     int pos=0;
     for(int i=0;i<n;i++)
     {
         if(array[i]==data)
         {
          pos=i;
         }
     }
     for(int i=pos;i<n;i++)
     {
          array[i]=array[i+1];
     }

}
void print(int array[],int n)
{
            cout<<"\n\n"<<endl;
        for(int i=0;i<n;i++)
    {

        cout<<array[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<endl<<endl;
    int array[10];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    print(array,n);
    int data=90;
    insert(array,data,3,n);
    n++;
    cout<<endl<<endl;

    print(array,n);
    deleted(array,90,n);
    n--;
    print(array,n);

    
}