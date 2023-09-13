#include<stdio.h>
#include<limits.h>
#include<time.h>


int dp[50][50];
int tabulation_mcm(int a[],int max)
 {
   int min,j,k,i,val;
   
   for(int l=0;l<max;l++)
     {
       for(i=1;i<max-l;i++)
        {
          j=i+l;
          if(i==j)
           { 
             dp[i][j]=0;
             continue;
             }
           min=INT_MAX; 
         for(k=i;k<j;k++)
          {
             val=dp[i][k]+dp[k+1][j]+(a[i-1]*a[k]*a[j]);
            if(min>val)
            {
               min=val;
             }
          
          }
         dp[i][j]=min;
          
        }    
     }
     return dp[1][max-1];
    }

int main()
{
  int i,j,n;
  
  clock_t s,e;
  printf("enter no of matrix");
  scanf("%d",&n);
  
  int a[n];
  printf("enter matrix sizes ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  
  
  int tabmin;
tabmin= tabulation_mcm(a,n);   
  printf("\nmin opereations by tabulation = %d ",tabmin); 
   printf("\n");                                       
    for(int i=1;i<n;i++)
    {
      for(int j=1;j<n;j++)
      {
        
        printf("%d ",dp[i][j]);
        }
      printf("\n");
    }                                         /* for(i=0;i<n;i++
                                                {                                                      for(j=0;j<n;j++)
                                                              printf("%d ",b[i][j]);
                                                          printf("\n");*/
  return 0;
}
