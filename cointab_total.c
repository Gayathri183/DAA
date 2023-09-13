#include<stdio.h>
int dp[50][50];

int cointab(int a[],int s,int n)
 {
   for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=s;j++)
       {
          if(j==0)
            dp[i][j]=1;
          else if(i==0)
            dp[i][j]=0;
          else if(a[i-1]<=j)
            dp[i][j]=dp[i][j-a[i-1]]+dp[i-1][j];
          else
            dp[i][j]=dp[i-1][j];      
       }
    }
    return dp[n][s];
 }


 int main()
  {
    int n,i,m,j,change;
    printf("enter no of coins\t");
     scanf("%d",&n);
    int a[n];
    printf("enter the amount of change\t");
     scanf("%d",&change);
    printf("enter coin values\t");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     m=cointab(a,change,n);  
    printf("total no of ways to get given amount is %d\n",m);
    printf("table\n");
    for(i=0;i<=n;i++)
     {
        for(j=0;j<=change;j++)
         printf("%d\t",dp[i][j]);
        printf("\n"); 
     }   
     
    return 0;  
  }
  
  
