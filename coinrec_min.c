#include<stdio.h>
#include<limits.h>
#define MAX 50 
int min(int a,int b)
 {
   if(a<b)
     return a;
   else
     return b;  
 }
 
 int coinc(int a[],int sum,int n)
  {
    if(sum==0)
      return 0;
    else if(n==0)
     return MAX;
    else if(n==1)
      {
         if(sum%a[n-1]==0)
           return sum/a[n-1];
         else
           return MAX;  
      }   
    else if(a[n-1]<=sum)
       return min(1+coinc(a,sum-a[n-1],n),coinc(a,sum,n-1));
    else
     return coinc(a,sum,n-1);      
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
     printf("min no of coins : %d",k);  
   }
  
  
