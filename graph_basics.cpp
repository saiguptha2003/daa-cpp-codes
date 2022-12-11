#include<iostream>
#define N 90

#include<vector>
using namespace std;
void create_graph_using_manual_method()
{
     int arr[N][N];
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cin>>arr[i][j];
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
}
void implementation_vector_graph()
{
          vector<vector<int>>adj[N];
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          vector<int>temp;
          for(int j=0;j<n;j++)
          {
               int f;
               cin>>f;
               temp.push_back(f);
          }
          adj[i].push_back(temp);
     }
}
void calculate_number_of_edges()
{
          int arr[N][N];
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cin>>arr[i][j];
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }

     int count=0;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               if(arr[i][j])
               {
                    count=count+1;
               }  
          }
     }
     cout<<count<<endl;
}
void find_maximum_distance_and_their_pair()
{
     int arr[N][N];
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cin>>arr[i][j];
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
     int max=0,maxi=0,maxj=0;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               if(arr[i][j]>max)
               {
                    maxi=i;
                    maxj=j;
                    max=arr[i][j];
               }
          }
     }
     cout<<maxi<<"->"<<maxj<<"="<<max<<endl;
}
void find_sum_of_degree()
{
              int arr[N][N];
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cin>>arr[i][j];
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
     int sum=0;

     for(int i=0;i<n;i++)
     {
          int count=0;
          for(int j=0;j<n;j++)
          {
               if(arr[i][j])
               {
                    count=count+1;
               }
          }
          cout<<"degree of "<<i+1<<"---->"<<count<<endl;
          sum=sum+count;
     }
     cout<<"sum of degree=="<<sum<<endl;
}
int main()
{

}
