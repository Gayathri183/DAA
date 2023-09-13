#include<stdio.h>
int wt[100],val[100],w,a[100];

void print(int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
   {
     if(a[i]==1)
     sum=sum+wt[i];
    }
  if(sum<=w)
  {
    int v=0;
    for(int i=0;i<n;i++)
     {
     if(a[i]==1)
       {
         printf(" %d ",wt[i]);
         v=v+val[i];
       }  
     }
     printf(" value - %d",v);
     printf("\n");
  }    
  
}

void ks(int index,int n)
{
  if(index==n)
  {
    print(n);
    return;
  }
  for(int i=0;i<2;i++)
  {
    a[index]=i;
    ks(index+1,n);
  }
}

int main()
{
  int i,n;
  printf("enter n value - ");
  scanf("%d",&n);
  printf("enter weight and value array \n");
  for(i=0;i<n;i++)
   scanf("%d%d",&wt[i],&val[i]);
  printf("enter max weight ");
  scanf("%d",&w);
  ks(0,n);  
}
