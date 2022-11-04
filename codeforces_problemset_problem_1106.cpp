/*
name: V D Panduranga sai guptha
problemset:https://codeforces.com/problemset/problem/1106/C
*/
#include<iostream>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int array[n];
     
     for(int i=0;i<n;i++)
     {
          cin>>array[i];
     }
     sort(array,array+n);
     long long int product=0;
     for(int i=0;i<n/2;i++)
     {
          int sum=0;
          sum=array[i]+array[n-i-1];
          product+=pow(sum,2);
     }
     cout<<product<<endl;

}
