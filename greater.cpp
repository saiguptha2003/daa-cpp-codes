/*
name:V D Panduranga Sai Guptha
date:29/09/2022
*/
#include<iostream>
using namespace std;
int greaters(int array[],int n,int target)
{
     int low=0;
     int high=n-1;
     while(low<=high)
     {
          int mid=(low+high)/2;
          if(array[mid]==target)
          {
               return mid;
          }
          if(array[mid]<target)
          {
               low=mid+1;
          }
          else{
               high=mid-1;
          }
     }
     return high;
}
int main()
{
     int array[]={1,2,2,3,4,6,8,9};
     int size=sizeof(array)/sizeof(array[0]);
     int target=5;
     int i=greaters(array,size,target);
     cout<<i<<endl;

}