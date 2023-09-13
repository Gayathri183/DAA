#include<stdio.h>          
#include<stdbool.h>
int dp[50][50];
int ssm(int a[],int n,int sum)
{

  for(int i=0;i<=n;i++)
   {
     for(int j=0;j<=sum;j++)
       {
        if(i==0)
         {
           dp[i][j]=false;
         }
        else if(j==0)
         {
           dp[i][j]=true;
           }  
    
        else 
         {
           if(j>=a[i-1])
               {
                  dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
                }  
          else
            {
             dp[i][j]=dp[i-1][j];
             }
         }  
       }
     }  
  return dp[n][sum];
}
 int main()
{
  int sum=0,n,j,i,ss;
   printf("enter n value\t");
     scanf("%d",&n);
   int a[n];
   printf("enter set elements");
    for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    for(i=0;i<n;i++)
       sum=sum+a[i];
   if(sum%2!=0)
     printf("FALSE equal partition is cant be done\n");
   else
   {  
       ss=ssm(a,n,sum/2);
      if(ss==true)
        printf("\n\tTRUE:equal partition can be done\n");
      else
       printf("\n\tFALSE:equal partition is cant be done\n");
     } 
     printf("table\n");
     for(i=0;i<=n;i++)
     {
         for(j=0;j<=(sum/2);j++)
           printf("%d\t",dp[i][j]);
         printf("\n");
     }  
     return 0;
}

