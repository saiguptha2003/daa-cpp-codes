/*
V.D PANDURANGA SAI
SELECTION SORT
*/
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
          int cur=i;
          for(int j=i+1;j<n;j++)
          {
               if(arr[j]<arr[cur])
               cur=j;

          }
          if(cur!=i)
           swap(arr[i],arr[cur]);
     }
}
int main()
{
     int arr[]={1,33,122,32,433,34,33,356,6,5,4};
     selection_sort(arr,sizeof(arr)/sizeof(arr[0]));
     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
     {
          cout<<arr[i]<<" ";
     }
}