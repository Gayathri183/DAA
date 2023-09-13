#include<stdio.h>
#include<stdbool.h>
int a[10];
int is_safe(int index,int val)
{
  for(int i=0;i<index;i++)      // WITHOUT REPETATIONS*****
  {
    if(a[i]==val)
     return false;
  }
  return true;
}
void print(int n)
{
  for(int i=0;i<n;i++)
   printf("%d ",a[i]);
   printf("\n");
}
 
void permutations(int index,int n)
{
  if(index==n)
   {
      print(n);
      return;
   }
   for(int i=0;i<n;i++)
   {
     if(is_safe(index,i))
       {
         a[index]=i;
         permutations(index+1,n);
       }
   }
   
}
int main()
{
  int n,i;
  printf("enter n = ");
  scanf("%d",&n);
 permutations(0,n);
}


