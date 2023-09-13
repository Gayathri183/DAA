#include<stdio.h>
#include<limits.h>
 
 int sum(int freq[],int m,int n)
 {
   int s=0;
   for(int i=m;i<=n;i++)
   s=s+freq[i];
   return s;
 }

int obst[10][10];

 int obstable(int key[],int freq[],int n)
  {
    int i,j,l,k,min,val;
    for(l=0;l<n;l++)
     {
       for(i=0;i<n-l;i++)
        {
          j=i+l;
          if(i==j)
           {
             obst[i][j]=freq[j];
             continue;
           }
         
           min=INT_MAX;
           for(k=i;k<=j;k++)
           { 
             val=((k>i)? obst[i][k-1]:0)+((k<j)? obst[k+1][j]:0);
             if(min>val)
              min=val;
             
           }  
         obst[i][j]=min+sum(freq,i,j) ; 
       }
    }
   return obst[0][n-1];
  }

 int main()
  {
     int i,j,n;
     printf("enter size of OBST : ");
     scanf("%d",&n);
     int freq[n],key[n];
     printf("enter keys and respective frequencies : ");
     for(i=0;i<n;i++)
      scanf("%d%d",&key[i],&freq[i]);
     int obstmin=obstable(key,freq,n);
     printf("cost of OBST is = %d ",obstmin);
     printf("\ntable of OBST \n");
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        printf("%d\t",obst[i][j]);
      printf("\n");  
     } 
 
 }
 
 
