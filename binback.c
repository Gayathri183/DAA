#include<stdio.h>
int a[100];
void print(int n)
{
  for(int i=0;i<n;i++)
   printf("%d ",a[i]);
   printf("\n");
}

void binary(int index,int n)
{
   if(index==n)
    {
      print(n);
      return;
    }
    
    for(int i=0;i<2;i++)
     {
       a[index]=i;
       binary(index+1,n);
     }
}

int main()
{
  int n;
  printf("enter n = ");
  scanf("%d",&n);
  binary(0,n);
}
