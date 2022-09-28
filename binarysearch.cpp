/*
name: V D Panduranga Sai Guptha
date:28/09/2022
*/
#include<iostream>
using namespace std;
int store[10];
int k=0;
int binary(int array[],int first,int last,int x)
{
     if(last>=first)
     {
          if(max<array[i])
               max=array[i];
          int mid=first+(last-first)/2;
          if(array[mid]==x )
               return mid;
          if(array[mid]>x)
               return binary(array,first,mid-1,x);
          return binary(array,mid+1,last,x);
     }
     else{
          int max=x;
          for(int i=first;i<last;i++)
          {
               
          }
          return binary(array,first,last,max);
     }
}
int main()
{
     int n;
     cin>>n;
     int array[n];
     for(int i=0;i<n;i++)
     {
          cin>>array[i];
     }
     int x;
     cin>>x;
     int c=binary(array,0,n-1,x);
     cout<<c<<endl;
}