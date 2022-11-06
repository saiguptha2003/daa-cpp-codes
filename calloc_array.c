#include<stdio.h>
#include<stdlib.h>
void main ()
{
  int n,i;
  int *ptr=(int*)calloc(n,sizeof(int));
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",ptr+i);
  }
  for(i=0;i<n;i++)
  {
    printf("\nentered elements:%d",*(ptr+i));
  }
  free(ptr);
}
