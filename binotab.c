#include<stdio.h>
int dp[100][100];
int b(int n,int k)
{
 for(int i=0;i<=n;i++)
 {
   for(int j=0;j<=k;j++)
   {
     if(i==j||j==0)
      dp[i][j]=1;
    else if(j>i)
       dp[i][j]=0;
      else 
       dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
   }
 }
 return dp[n][k];
 }
int main()
{  int i,j,sum,n,r;
   printf("enter n and r value : ");
   scanf("%d%d",&n,&r);
  
  sum=b(n,r);
   
    
   
    printf("%d \n",sum);
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=r;j++)
      printf("\t%d",dp[i][j]);
      printf("\n");
    } 
        
}




