#include<stdio.h>
int a[20][20];
int issafe(int a[][20],int index,int i,int n)
{
   for(int j=index;j>0;j--)
    { printf("0");
      if(a[j][i]==1)
        return 0;
     }
    for(int j=0;j<n;j++)
    {
       if(a[index][j]==1)
          return 0;
     }
   for(int l=index,j=i;l>0 && j>0 ;j--,i--)
   { 
      if(a[l][j]==1)
        return 0;
   }
   for(int l=index,j=i;l>0 && j<=n;j++,l--)
   {
      if(a[l][j]==1)
        return 0;
    }
   return 1;
   
}
int nQueen(int a[][20],int j,int n)
{
   
   for(int i=1;i<=n;i++)
   {
      if(issafe(a,i,j,n)==1)
          {
          a[i][j]=1;
          j=0;
          printf("Fitted");
          }
      else  
         nQueen(a,j+1,n);
         
           
        
   }
   return 0;
}

void main()
{
  int n;
  printf("number of Queens:");
  scanf("%d",&n);
  int a[n][n];
  for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
       a[i][j]=0;
      }
      
    }
   nQueen(a,1,n);
 for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
       printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
    
 }
  

