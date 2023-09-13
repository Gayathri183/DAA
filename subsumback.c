#include<stdio.h>
int val[100],a[100];
int s;
void print(int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  { 
    if(a[i]==1)
     sum=sum+val[i];
  }
  if(sum==s)
  {
    printf("yes ");
    for(int i=0;i<n;i++)
    {  
      if(a[i]==1)
      {
      printf("%d ",val[i]);
      }
    
  } }
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
  int n,i;
  printf("enter n & sum value ");
  scanf("%d%d",&n,&s);
  printf("enter values : ");
  for(i=0;i<n;i++)
  scanf("%d",&val[i]);
  binary(0,n);
}
