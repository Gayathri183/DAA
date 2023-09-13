#include<stdio.h>

/*int fib(int n)
{
  if(n==0||n==1)
    return n;
   else
   return fib(n-2)+fib(n-1); //recurrsion
}
int main()
{
  int i,n;
printf("enter no of elements ");
scanf("%d",&n);

printf("%d ",fib(n));
}

         //memorisation


int a[100];
int fib(int n){
  if(n==0||n==1)
   a[n]=n;
   else
   {
     if(a[n]==-1)                 
   return  a[n]=fib(n-2)+fib(n-1);
    else
     return a[n];
   }
}
int main()
{
   int i,n;
printf("enter no of elements ");
scanf("%d",&n);
int b[n];
for(i=0;i<=n;i++)
a[i]=-1;

 printf("%d ",fib(n));
 
}*/

   //tabulation
   int a[100];
   int fib(int n)
   {
     if(n<0)
     printf("not exist ");
     else
     {
     a[0]=0,a[1]=1;
     for(int i=2;i<=n;i++)
     a[i]=a[i-2]+a[i-1];
    
     }
      return a[n];
   }
    
 int main()
 {
   int n;
   printf("enter n value ") ;
   scanf("%d",&n);
   printf("%d ",fib(n)); 
 }  
   






