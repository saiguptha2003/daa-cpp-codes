/*
name:V D Panduranga Sai 
date:29/09/2022
*/
#include<iostream>
using namespace std;
int firstoccurence(int array[],int n,int target)
{
     int low=0,high=n-1;
     while(low<=high)
     {
          int mid=(low+high)/2;
          if(array[mid]==target && array[mid-1]<target)
          {
               return mid;
          }
          else if(array[mid]<target)
          {
               low=mid+1;
          }
          else{
               high=mid-1;
          }
     }
     return -1;
}
int recursiveFirstoccurence(int array[],int low,int high,int target)
{
     if(low<=high)
     {
          int mid=(low+high)/2;
          if(array[mid]==target && array[mid-1]<target)
          {
               return mid;
          }
          if(array[mid]<target)
          {
               return  recursiveFirstoccurence(array,mid+1,high,target);
          }
          else{
              return  recursiveFirstoccurence(array,low,mid-1,target);
          }
     }
     return -1;
}
int recursiveLastoccurence(int array[],int low,int high,int target)
{
     if(low<=high)
     {
          int mid=(low+high)/2;
          if(array[mid]==target && array[mid+1]>target)
          {
               return mid;
          }
          if(array[mid]<target)
          {
               return recursiveLastoccurence(array,mid+1,high,target);
          }
          else{
               return recursiveLastoccurence(array,low,mid-1,target);
          }
     }
     return -1;
}
int main()
{
     int array[]={2,2,2,2,5,5,5,6};
     int size=sizeof(array)/sizeof(array[0]);
     int target=5;
     int i=firstoccurence(array,size,target);
     int ri=recursiveFirstoccurence(array,0,size,target);
     cout<<i<<endl;
     return 0;
}