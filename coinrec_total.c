#include<stdio.h>

int coinc(int a[],int s,int n)
 {
    if(n==0)
      return 0;
    else if(s==0)
      return 1;
    else
    {
       if(a[n-1]<=s)
         return coinc(a,s-a[n-1],n)+coinc(a,s,n-1);
       else
         return coinc(a,s,n-1);  
    }    
 }
 
 int main()
  {
    int n,i,change;
    printf("enter no of coins\t");
     scanf("%d",&n);
    int a[n];
    printf("enter the amount of change\t");
     scanf("%d",&change);
    printf("enter coin values\t");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("total no of ways to get given amount is %d",coinc(a,change,n));
    return 0;  
  }
