#include<stdio.h>            //subset sum true or false recurrsion
#include<stdbool.h>
int ssm(int a[],int n,int sum)
{
  if(sum==0)
    {
      return true;
    }
  else if(n==0)
    {
      return false;
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
  int sum,n,i,ss;
   printf("enter n value\t");
     scanf("%d",&n);
   printf("enter sum value\t");
   scanf("%d",&sum);
   int a[n];
   printf("enter set elements");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\n");
   ss=ssm(a,n,sum);
   if(ss==true)
    printf("\n\tTRUE:subsets exits for the given sum");
   else
     printf("\n\tFALSE:no subsets exits for the given sum");
     return 0;
}

