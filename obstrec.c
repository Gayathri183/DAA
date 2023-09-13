#include<stdio.h>
#include<limits.h>

 int sum(int freq[],int n,int m)
  {  
    int s=0;
    for(int i=n;i<=m;i++)
     s=s+freq[i];
     return s;
  }

 int optimal(int key[],int freq[],int i,int j)
  {
    int val;
     if(i>j)
     return 0;
     if(i==j)
      return freq[i];
     int min=INT_MAX;
     for(int k=i;k<=j;k++)
      {
        val=optimal(key,freq,i,k-1)+optimal(key,freq,k+1,j);
        if(min>val)
         min=val;
      } 
  return min+sum(freq,i,j);
 }
 
 int main()
  {
    int n;
    printf("enter no of keys : ");
    scanf("%d",&n);
    int freq[n],key[n];
    printf("\nenter keys and respective frequencies : ");
    for(int i=0;i<n;i++)
     scanf("%d%d",&key[i],&freq[i]);
    int min=optimal(key,freq,0,n-1);
    printf("\nminimum = %d",min);
  }
  
  
