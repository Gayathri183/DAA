//Fractional knap sack
#include<stdio.h>
int KS(int wt[],int val[],int w,int n);
void Sort(int val[],int wt[],int n);
void main()
{
  int n,w;
  printf("Enter weight of knapsack:");
  scanf("%d",&w);
  printf("Enter Number of elements");
  scanf("%d",&n);
  int wt[n],val[n];
  printf("Enter elements to an weight array\n");
  for(int i=0;i<n;i++)
        scanf("%d",&wt[i]);
         printf("Enter elements to an value array\n");
  for(int i=0;i<n;i++)
       scanf("%d",&val[i]);
             Sort(val,wt,n);
 printf("After Sorting :\n");
 for(int i=0;i<n;i++)
    printf("%d ",wt[i]);
    printf("\n");
    
 for(int i=0;i<n;i++)
    printf("%d ",val[i]);
             int k=KS(wt,val,w,n);
              printf("\nValue of kanpSack = %d ",k);
              
}
int KS(int wt[],int val[],int w,int n)
{
  if(n==0 || w==0)
    return 0;
  else if(wt[n-1]<=w)
     return val[n-1]+KS(wt,val,w-wt[n-1],n-1);
  else 
     return ((float)val[n-1]/wt[n-1])*w;
}
void Sort(int val[],int wt[],int n)
{
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
          if((float)val[j+1]/wt[j+1] < (float)val[j]/wt[j] )
          {
             int temp=wt[j];
             wt[j]=wt[j+1];
             wt[j+1]=temp;
             temp=val[j];
             val[j]=val[j+1];
             val[j+1]=temp;
           }
          }
      }
}

