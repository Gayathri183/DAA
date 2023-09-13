//COUNT SUM OF SUBSETS

#include<stdio.h>
#include <stdbool.h>
//given target of sum can be achieved or not 
int SS(int wt[],int sum,int n);
void main()
{
 int sum,n,k;
 printf("Enter the target sum ");
 scanf("%d",&sum);
 printf("Enter no of items:");
 scanf("%d",&n);
 int wt[n];
 printf("Enter the Weights of an array");
 for(int i=0;i<n;i++)
  scanf("%d",&wt[i]);
  
  printf("%d",SS(wt,sum,n));
}
int SS(int wt[],int sum,int n)
{
 
  if(sum==0)
      return 1;
  if(n==0)
      return 0;
  if(wt[n-1]<=sum)
    return SS(wt,sum-wt[n-1],n-1)+SS(wt,sum,n-1);
   else
  return SS(wt,sum,n-1);
 }
