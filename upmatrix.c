#include<stdio.h>

int main()
{
  int n,i,j,t=1;
  printf("enter n value");
  scanf("%d",&n);
  int a[n][n];
  for(i=0;i<n;i++)
  { 
    for(j=0;j<n;j++)
       a[i][j]=0;
   }    
  for(i=0;i<n;i++)
  {
     int k=0;
     for(j=i;j<n;j++)
     a[k++][j]=t++;
  }
  for(i=0;i<n;i++)
  { 
    for(j=0;j<n;j++)
     { if(a[i][j]==0)
       printf("\t");
       else
      printf("%d\t",a[i][j]);
      }
    printf("\n");  
   }    
  
}
