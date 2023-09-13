#include<stdio.h>
int dp[50][50];
int tab[50][50];
int waysrec(int a[],int n,int sum)    // NO OF WAYS TO GET GIVEM SUM ****recurrsion
   {
      if(sum==0)
        return 1;
      
      else if(n==0)
        return 0;
       
     else if(a[n-1]<=sum)   
        return waysrec(a,n-1,sum-a[n-1])+waysrec(a,n-1,sum);
     
     else
        return waysrec(a,n-1,sum);
          
  }
int waysmem(int a[],int n,int sum)   //NO OF WAYS TO GET GIVEM SUM ****MEMORISATION
  {
    if(sum==0)
      return 1;
      
    else if(n==0)
      return 0;
     
    else if(dp[n][sum]!=-1)
      return dp[n][sum];
      
    else if(a[n-1]<=sum)
       return dp[n][sum]=waysmem(a,n-1,sum-a[n-1])+waysmem(a,n-1,sum);
          
    else
       return dp[n][sum]=waysmem(a,n-1,sum);
  
  } 
  
  int waystable(int a[],int n,int sum)
   {
       int i,j;
       for(i=0;i<=n;i++)            // TABULATION METHOD
        {
          for(j=0;j<=sum;j++)
             {
                if(j==0)
                  tab[i][j]=1;
                  
                else if(i==0)
                  tab[i][j]=0;  
                
                else if(a[i-1]<=j)
                  tab[i][j]=tab[i-1][j-a[i-1]]+tab[i-1][j];
                
                else
                  tab[i][j]=tab[i-1][j];     
             }
        }
      return tab[n][sum];  
  }
  
  
  int main()
{
	int n;
	printf("enter n value\n");
	  scanf("%d",&n);
	  
	int wt[n],i,j,k,sum;
	
	printf("enter values:\n");
	for(i=0;i<n;i++)
	 {
		scanf("%d",&wt[i]);
	 }
	printf("enter the sum:\n");
	 scanf("%d",&sum);
	 printf("\nreccursion\n");
	 
        for(i=0;i<=n;i++)
         {
            for(j=0;j<=sum;j++)
               dp[i][j]=-1;
         }
         k=waysrec(wt,n,sum);
         printf("\t%d ways you can get the sum %d\t\n",k,sum);	
         
       k=waysmem(wt,n,sum);	 
	printf("\nmemorisation\n");
	 printf("\t%d ways you can get the sum %d\t\n",k,sum);	
     printf("\n\ttablation\n");
       
       k= waystable(wt,n,sum);
       printf("\t%d ways you can get the sum %d\t\n",k,sum);	
      	 printf("\n\t table\n\n"); 
        for(i=0;i<=n;i++)
         {
            for(j=0;j<=sum;j++)
              printf("%d\t",tab[i][j]);
            printf("\n");  
         }
          
	return 0;
}


