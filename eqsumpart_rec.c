#include<stdio.h>          
#include<stdbool.h>
int ssm(int a[],int n,int sum)
{
  if(n==0)
    {
      return false;
    }
  else if(sum==0)
    {
      return true;
    }  
  else if(sum>=a[n-1])
  {
      return ssm(a,n-1,sum-a[n-1]) || ssm(a,n-1,sum);
  }  
  else
   {
     return ssm(a,n-1,sum);
   }
}
 int main()
{
  int sum=0,n,i,ss;
   printf("enter n value\t");
     scanf("%d",&n);
   int a[n];
   printf("enter set elements");
    for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    for(i=0;i<n;i++)
       sum=sum+a[i];
   printf("\n");
   if(sum%2!=0)
     printf("FALSE equal partition is cant be done\n");
   else
   {  
       ss=ssm(a,n,(sum/2));
      if(ss==true)
        printf("\n\tTRUE:equal partition can be done\n");
      else
       printf("\n\tFALSE:equal partition is cant be done\n");
     }  
     return 0;
}

