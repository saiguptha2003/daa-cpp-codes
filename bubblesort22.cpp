/*name: V D Panduranga Sai Guptha
date:28/09/2022
*/
#include<iostream>
using namespace std;
int n;
void swap(int a,int b)
{
     int temp=0;
     temp=a;
     a=b;
     b=temp;
}
void binarysort(int array[100])
{
     bool swaped=false;
     for(int i=0;i<n-1;i++)
     {
          swaped=false;
          for(int j=0;j<n-i-1;j++)
          {
               if(array[j]>array[j+1])
               {
                    int temp=0;
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                    swaped=true;

               }

          }
           if(swaped==false)
          {
               break;
          }

     }

}

int main()
{
     int array[100];
     cin>>n;
     int i=0;
     while(i!=n)
     {
          cin>>array[i];
          i++;
     }
     i=0;
     binarysort(array);
     for(int k=0;k<n;k++){
          cout<<array[k]<<"  ";
     }

}