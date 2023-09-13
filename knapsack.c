#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int x,int y)
{
  if(x<y)
  return y;
  else
   return x;
}
int k[100][100],a[100][100];



/*int knapsack(int n,int wt[],int val[],int W)        //reccursive approach
{
  if(n==0 || W<=0)
   return 0;
  else if(wt[n-1]<=W)
   return max(val[n-1]+knapsack(n-1,wt,val,W-wt[n-1]),knapsack(n-1,wt,val,W));
  else
   return knapsack(n-1,wt,val,W);
}

 int knapsack(int n,int wt[],int val[],int w)  //memorisation
{
   if(n==0 || w==0)
     k[n][w]=0;
  if(k[n][w]!=-1)
     return k[n][w];
 
      if(wt[n-1]<=w)
        return k[n][w]=max(val[n-1]+knapsack(n-1,wt,val,w-wt[n-1]),knapsack(n-1,wt,val,w));
      else
       return k[n][w]=knapsack(n-1,wt,val,w);
     }
*/

 int knapsack(int n,int wt[],int val[],int w)
 {
  for(int i=0;i<=n;i++)          // tabulation method
  {
    for(int j=0;j<=w;j++)
    {
      if(i==0||j==0)
       {a[i][j]=0;
        continue;}
      if(wt[i-1]<=j)
       a[i][j]=max(val[i-1]+a[i-1][j-wt[i-1]],a[i-1][j]);
      else
      a[i][j]=a[i-1][j];   
  }}
  return a[n][w]; 
  
 }


int main()
{
  int i,j,n,w;
  FILE *fp,*vp;
  clock_t s,e;
  
  printf("enter no of elements ");
  scanf("%d",&n);
 
  int wt[n],val[n];
  printf("enter max weight of knapsack ");
  scanf("%d",&w);
  for(i=1;i<n+1;i++)
   {for(j=1;j<w+1;j++)  k[i][j]=-1;}
   
  
  fp=fopen("value.txt","w");
  
  for(i=0;i<n;i++)
  {
    fprintf(fp,"%d",rand()%1000);
    putc('\n',fp);
  } 
  fclose(fp);
  vp=fopen("weight.txt","w");
  for(i=0;i<n;i++)
  {
    fprintf(vp,"%d",rand()%20);
    putc('\n',vp);
  }
  fclose(vp);
  i=0,j=0;
  fopen("weight.txt","r");
      while(fscanf(vp,"%d",&wt[j])!=EOF)
      j++;
  fclose(vp);
  fopen("value.txt","r");
  while(fscanf(fp,"%d",&val[i])!=EOF)
  i++;
  fclose(fp);
 
  printf("\nweight array \n");
  for(i=0;i<n;i++)
   printf("%d ",wt[i]);
  
  printf("\nvalue array\n");
  for(i=0;i<n;i++)
   printf("%d ",val[i]);
   s =clock();
     printf("\n\tmax value = %d ",knapsack(n,wt,val,w));
  e=clock();
  printf("\n\ttimetaken = %f ",(float)e-s/CLOCKS_PER_SEC);
  
  for(i=0;i<n+1;i++)
  {
    for(j=0;j<n+1;j++)
    printf("%d\t",a[i][j]);
    printf("\n");  }

}




