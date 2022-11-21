/*
NAME: V D Panduranga Sai Guptha
Topic:N queen problem with bool datatype
*/

#include<iostream>
#define N 10
using namespace std;
bool is_safe(bool arr[N][N],int row,int col,int n)
{
     for(int i=0;i<n;i++)
     {
          if(arr[row][i])
          {
               return false;
          }
     }
     for(int i=row,j=col;i>=0 && j>=0;i--,j--)
     {
          if(arr[i][j])
          {
               return false;
          }
     }
     for(int i=row,j=col;i<n&&j>=0;i++,j--)
     {
          if(arr[i][j])
          {
               return false;
          }
     }
     return true;
}
bool solution(bool arr[N][N],int col,int n)
{
     if(col>=n)
     {
          return true;
     }
     for(int i=0;i<n;i++)
     {
          if(is_safe(arr,i,col,n))
          {
               arr[i][col]=1;
               if(solution(arr,col+1,n))
               {
                    return true;
               }
               arr[i][col]=0;
          }

     }
     return false;
}
void printboard(bool arr[N][N],int n)
{
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<arr[i][j]<<" ";

          }
          cout<<endl;
     }
}
int main()
{
     int n;
     cin>>n;
     bool chessboard[N][N]={0};
     solution(chessboard,0,n);
     printboard(chessboard,n);


}