#include<stdio.h>
#include"arrays.h"
int main()
{
  int n,arr[10],s,i=0,c;
  printf("enter the number elements:");
  scanf("%d",&n);
  printf("elements in array arr[]\n:");
  scans(n,arr);
  prints(n,arr);
  printf("\nenter the element to :");
//  searchelement(arr,n,s); format :searchelement(arrayname,numberofelements,searchelement)
  scanf("%d",&s);
  while(i<n)
  {
    if(arr[i]==s)
    {
      printf("search element %d found in index %d",arr[i],i);
       return 0;
    }
    i=i+1;
  }
  printf("element not found");
}
}
