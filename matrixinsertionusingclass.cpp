/*
name:V D Panduranga Sai Guptha
date:28-09-2022
*/
#include<iostream>
using namespace std;
class matrix
{
     public:
     int a[100][100];
     int r=0,c=0;
     void insert(int r,int c)
     {
          cout<<"Enter the elements:"<<endl;
          for(int i=0;i<r;i++)
          {
               for(int j=0;j<c;j++)
               {
                    printf("Enter the value of arr[%d][%d] :",i,j);
                    cin>>a[i][j];
               }
          }
     }
     void retrive(int r,int c)
     {
          cout<<"Retrived Matrix :"<<endl;
          for(int i=0;i<r;i++)
          {
               for(int j=0;j<c;j++)
               {
                    cout<<a[i][j]<<" ";
               }
               cout<<"\n";
          }
     }
};
int main()
{
     matrix d;
     int r,c;
     cout<<"Enter the rows and coloums :"<<endl;
     cin>>r>>c;
     d.insert(r,c);
     d.retrive(r,c);
     return 0;
} 
