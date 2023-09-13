#include<stdio.h>
int dp[100][100];
int b(int n,int k)
{
  if(k==0||k==n)
   return 1;
   else
    return b(n-1,k-1)+b(n-1,k);
 }
 int bm(int n,int k)
 {
   if(k==0||k==n)
    return dp[n][k]=1;
    else if(dp[n][k]!=-1)
     return dp[n][k];
     else
      return dp[n][k]=bm(n-1,k-1)+bm(n-1,k);
 }
 
int main()
{  int i,j,sum,n,r;
   printf("enter n and r value : ");
   scanf("%d%d",&n,&r);
   for(i=0;i<=n;i++)
    {
      for(j=0;j<=r;j++)
      dp[i][j]=-1;
      }
  sum=bm(n,r);
   
printf("%d",n);  
        
}
