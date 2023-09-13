#include<stdio.h>
int n;

int a[10];
int is_safe(int index,int val,int adjlist[][5])
{                                                   ///strating with all INDEX**** 
  if(index==n-1)
  {
    for(int i=0;i<index;i++)
    {
      if(a[i]==val || adjlist[a[index-1]][val]==0 || adjlist[val][a[0]]==0)
      // if(val==4 && a[0]==3)
      // printf("%d ",adjlist[val][a[0]]); 
       return 0;
     }
  }
  if(index!=n)
  {
   for(int i=0;i<index;i++)
   {
    if(a[i]==val || adjlist[a[index-1]][val]==0)
     return 0;
     }
  }
  return 1;
}

 void print(int n)
 {
   for(int i=0;i<n;i++)
   printf("%d - ",a[i]);
   printf("\n");
 }

void hamil(int index,int n,int adjlist[][5])
{
  if(index==n)
  {
    print(n);
    return;
  }
  for(int i=0;i<n;i++)
  {
  if(is_safe(index,i,adjlist))
   { 
    a[index]=i;
    hamil(index+1,n,adjlist);
    }
  }
}

int main()
{
  int i;
  n=5;
// int adjlist[4][4]={{1,1,0,1},{1,1,1,0},{0,1,1,1},{1,0,1,1}};
// int adjlist[4][4]={{1,0,1,1},{0,1,1,1},{1,1,1,0},{1,1,0,1}};
int adjlist[5][5]={{1,1,0,1,0},{1,1,1,0,0},{0,1,1,0,1},{1,0,0,1,0},{0,0,1,0,1}};
  // a[0]=0;
  hamil(0,n,adjlist);
 
}







