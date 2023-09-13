#include<stdio.h>
#include<limits.h>
#include<time.h>


/*int mcm(int a[],int i,int j)            //reccurrion
{
  int val,k;
 
  if(i==j)
  return 0;
  int min=INT_MAX;
 
    for(k=i;k<j;k++)
     {
       val=mcm(a,i,k)+mcm(a,k+1,j)+(a[i-1]*a[k]*a[j]);
       printf("\n\t%d",val);
       if(min>val)
       min=val;
     }
    return min;
  
}*/
int mem[50][50];
int dp[50][50];
int mcm(int a[],int i,int j)              //memorisation
{
 int min=INT_MAX;
  int val,k;
  if(i==j)
    return 0;
  else if(mem[i][j]!=-1)
    return mem[i][j];
    
 else
   {
     for(k=i;k<j;k++)
     {
       val=mcm(a,i,k)+mcm(a,k+1,j)+(a[i-1]*a[k]*a[j]);
       if(min>val)
        min=val;
     }
     return mem[i][j]=min;
   }     
}

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
  for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
    mem[i][j]=-1;
    }
  
  int a[n];
  printf("enter matrix sizes ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 // s=clock();
 printf("\n\tmemoristion method\n");
  int min  = mcm(a,1,n-1);
  printf("\nmin opereations by memoristion = %d ",min);
 // e=clock();
 // float t=(float)(e-s)/CLOCKS_PER_SEC;
 // printf("time= %f",t);
 return 0;
 }
                                                               /* for(i=0;i<n;i++
                                                               for(j=0;j<n;j++)
                                                              printf("%d ",b[i][j]);
                                                          printf("\n");*/
  
