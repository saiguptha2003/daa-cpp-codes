#include<iostream>
using namespace std;
void algorithm(int graph[100][100],int n)
{
     for(int k=0;k<n;k++)
     {
          for(int i=0;i<n;i++ )
          {
               for(int j=0;j<n;j++)
               {
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
               }
          }
     }
}
void print(int graph[100][100],int n)
{
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               if(graph[i][j]==999)
               {
                    cout<<"inf"<<" ";
               }
               else
               cout<<graph[i][j]<<" ";
               
          }
          cout<<endl;
     }
}
int main()
{
     int graph[100][100];
     cout<<"enter the number of vertices:";
     int n;
     cin>>n;
     cout<<"enter the weights of vertices:";
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cin>>graph[i][j];
          }
     }
     algorithm(graph,n);
     print(graph,n);

}