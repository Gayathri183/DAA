#include<stdio.h>
int a[10],wt[10],val[10];


 void bubble(int a[],int n)
 {  
   int i,j,r;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
        if(a[j]<a[j+1])
        {
          r=a[j];
          a[j]=a[j+1];
          a[j+1]=r;
          r=wt[j];
          wt[j]=wt[j+1];
          wt[j+1]=r;
          r=val[j];
          val[j]=val[j+1];
          val[j+1]=r;
        }
      }
    }
 } 
 int knapsack(int w,int n)
 {
  int sum=0;
  for(int i=0;i<n;i++)
   {
     if(wt[i]<=w)
      {
        sum=sum+val[i];
        w=w-wt[i];
      }  
     else
     {
       sum=sum+(a[i]*w);
       break;
     } 
    } 
   return sum;   
 }
 
 int main()
 {
   int n,i,w;
   printf("enter no of values : ");
   scanf("%d",&n);
   printf("enter weights and values of the knapsack : ");
   for(i=0;i<n;i++)
     scanf("%d%d",&wt[i],&val[i]);
   for(i=0;i<n;i++)
    {
       a[i]=val[i]/wt[i];
    }
   /* printf("weights and value array \n");
    for(i=0;i<n;i++)
    {printf("%d\t%d",wt[i],val[i]); printf("\n");}*/
    printf("\nfraction array : ");
   for(i=0;i<n;i++)
     printf("%d ",a[i]); 
   bubble(a,n);
    printf("\nsorted array : ");
   for(i=0;i<n;i++)
      printf("%d ",a[i]);
     printf("\nsorted weights and value array \n");
    for(i=0;i<n;i++)
    {printf("%d\t%d",wt[i],val[i]); printf("\n");} 
    printf("enter knapsack maximam weight ");
    scanf("%d",&w);
    int max=knapsack(w,n);
    printf("knapsack max value = %d",max);
 }
 
 /*#include<stdio.h>

void sort(int wt[],int val[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
     {
       if(val[j]/wt[j]<val[j+1]/wt[j+1])
        {
          int t=wt[j];
          wt[j]=wt[j+1];
          wt[j+1]=t;
           t=val[j];
          val[j]=val[j+1];
          val[j+1]=t;
        }
     }
  }
}

void ks(int wt[],int val[],int w,int n)
{
int vall=0;
  for(int i=0;i<n;i++)
   {
     if(wt[i]<=w)
     {
       vall=vall+val[i];
       w=w-wt[i];
     }
     else
     {
       vall=vall+w*(val[i]/wt[i]);
       break;
     }
   }
   printf("max =%d ",vall);
}


int main()
{
  int val[]={15,12,10,31};
  int wt[]={5,3,2,4};
  sort(wt,val,4);
  ks(wt,val,11,4);
}




*/
 
