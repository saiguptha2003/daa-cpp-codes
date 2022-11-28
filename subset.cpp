#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#define S 1000
int memory[S][S];
int solution(int a[],int sum,int n)
{
     if(sum==0)
     {
          return 1;
     }
     if(n<=0)
     {
          return 0;
     }
     if(memory[n-1][sum]!=-1)
     return memory[n-1][sum];
     if(a[n-1]>sum)
     return memory[n-1][sum]=solution(a,sum,n-1);
     else
     return memory[n-1][sum]=solution(a,sum,n-1)||solution(a,sum-a[n-1],n-1);
     
}
void utilityfunc()
{
     int n;
     cin>>n;
     memset(memory,-1,sizeof(memory));
     int array[S];
     for(int i=0;i<n;i++)
     {
          cin>>array[i];
     }
     int sum;
     cin>>sum;
     if(solution(array,sum,n))
     cout<<"subset present"<<endl;
     else
     cout<<"subset not present"<<endl;
}
int main()
{
     utilityfunc();
}