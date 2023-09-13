#include<stdio.h>
#include<limits.h>
#define  MAX 50
int dp[50][50];
int min(int a,int b)
 {
   if(a<b)
     return a;
   else
     return b;  
 }
 
 int coinc(int a[],int sum,int n)
  {
   for(int i=0;i<=n;i++)
     {
       for(int j=0;j<=sum;j++)
        {
          if(i==0)
           dp[i][j]=MAX;
          else if(j==0)
            dp[i][j]=0;
         else if(i==1)
           {
              if(j%a[i-1]==0)
                 dp[i][j]=j/a[i-1];
             else
               dp[i][j]=MAX;  
           }   
          else if(a[i-1]<=j)
              dp[i][j]=min(1+dp[i][j-a[i-1]],dp[i-1][j]);
           else
            dp[i][j]=dp[i-1][j];  
           
       }
     }       
   return dp[n][sum]; 
  }
  
  int main()
   {
     int n,i,sum,k;
     printf("enter no of coins\t");
      scanf("%d",&n);
     printf("enter total sum\t");
      scanf("%d",&sum);
     int a[n];
     printf("enter coins values\t");
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
     k=coinc(a,sum,n) ;
     printf("min no of coins : %d\n",k);  
     printf("table\n");
      for(int i=0;i<=n;i++)
      {
        for(int j=0;j<=sum;j++)
          printf("%d\t",dp[i][j]);
        printf("\n");  
      } 
   }
  
