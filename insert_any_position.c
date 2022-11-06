/*insert element*/
#include<stdio.h>
void main()
{
  int arr[]={2,3,4,5,6};
  int num=5,k=4,j=num;
  int s;
  printf("print first set");
  for(int i=0;i<num;i++)
  {
printf("\narr[%d]=%d",i,arr[i]);
  }
  num =num+1;
  while(j>=k)
  {
    arr[j+1]=arr[j];
    j=j-1;
  }
  scanf("%d",&s);
  arr[k] = s;
  printf("after insertion\n");
  for(int i=0;i<num;i++)
  {
    printf("\narr[%d]=%d",i,arr[i]);
  }
}
