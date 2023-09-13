#include<stdio.h>

void bubble(int a[],int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        int t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
}

int main()
{
  int i;
  int a[]={23,2,67,1,8,9,3,21};
  for(i=0;i<8;i++)
  printf("%d ",a[i]);
  printf("\n");
  bubble(a,8);
  for(i=0;i<8;i++)
  printf("%d ",a[i]);
}
