#include<stdio.h>
#include<stdbool.h>

 int dp[50][50];
 int sstab(int a[],int n,int sum)
  {
    int i,j;
    for(i=0;i<=n;i++)
     {
       for(j=0;j<=sum;j++)
        {
             if(j==0)
                dp[i][j]=true;
                
             else if(i==0)
                dp[i][j]=false;
                
             else if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
             
             else
              dp[i][j]=dp[i-1][j];      
       }            
     }
   return dp[n][sum];  
  }   
  
  int main()
    {
          int i,j,n,sum;
          printf("enter n value\t");
           scanf("%d",&n);
           
          printf("enter sum \t");
           scanf("%d",&sum);
           
          int set[n];
          printf("enter values \t");
          
          for(i=0;i<n;i++)
           {
              scanf("%d",&set[i]);  
           }
           
          if(sstab(set,n,sum)==true)
             printf("\n\tTRUE\n");
          else
            printf("\n\tFALSE\n");
         
          printf("table\n");  
        for(i=0;i<=n;i++)
         { 
            for(j=0;j<=sum;j++) 
                 printf("%d\t",dp[i][j]);
            printf("\n");
         }       
            
    }
    
    
    
