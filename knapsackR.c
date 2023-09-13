#include<stdio.h>

int max(int x,int y)
{
  if(x<y)
  return y;
  else
   return x;
}
int k[100][100];
/*
int knapsack(int n,int wt[],int val[],int W)        //reccursive approach
{
  if(n==0 || W<=0)
   return 0;
  else if(wt[n-1]<=W)
   return max(val[n-1]+knapsack(n-1,wt,val,W-wt[n-1]),knapsack(n-1,wt,val,W));
  else
   return knapsack(n-1,wt,val,W);
}*/
int knapsack(int n,int wt[],int val[],int w)  //memorisation
{
   if(n==0 || w==0)
     k[n][w]=0;
  if(k[n][w]!=-1)
     return k[n][w];
 
      if(wt[n-1]<=w)
        return k[n][w]=max(val[n-1]+knapsack(n-1,wt,val,w-wt[n-1]),knapsack(n-1,wt,val,w));
      else
       return k[n][w]=knapsack(n-1,wt,val,w);
     }




int main()
{
  int i,j,n,W;
  printf("enter no of elements ");
  scanf("%d",&n);
  printf("enter max weight of knapsack ");
  scanf("%d",&W);
   
  
   for(i=0;i<=n+1;i++)
    {
      for(j=0;j<=W+1;j++)
      { 
        if(i==0||j==0)
        k[i][j]=0;
        else
         k[i][j]=-1;
      }
   }
  
 
 
  int wt[n],val[n];
  printf("enter weights and respective values ");
  for(i=0;i<n;i++)
  scanf("%d%d",&wt[i],&val[i]);
  knapsack(n,wt,val,W);
  printf("%d ",k[n][W]);

}
