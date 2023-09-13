#include<stdio.h>
#include<stdbool.h>
int a[10];           //// PERMUTATIONS WITH REPETATION ****
void print(int n)
{
 for(int i=1;i<=n;i++)
  printf("%d ",a[i]);
  printf("\n");
}

void permu(int index,int n)
{
  if(index==n+1)
  {
    print(n);
    return; 
  }
  for(int i=1;i<=n;i++)
   {
     a[index]=i;
     permu(index+1,n);
   }
}

int main()
{
  int n,i;
  printf("enter n = ");
  scanf("%d",&n);
  permu(1,n);
}
