#include<stdio.h>
#include<limits.h>
int adj[10][10];
int a[10];
 void Hamiltonian(int k,int n);
/* 0 1 0 0 0 1
1 0 1 0 1 0
0 1 0 1 0 1
0 0 1 0 1 0
0 1 0 1 0 1
1 0 1 0 1 0
*/
void main()
{
  int n,k;
  printf("no of Vertice");
  scanf("%d",&n);
  printf("Adj Matix whether edge present or not");
  for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=n;j++)
     {
        scanf("%d",&adj[i][j]);
      }
   }
 /*  for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
        printf("%d ",adj[i][j]);
      }
      printf("\n");
   }*/
   

 for(int i=1;i<=n;i++)
 {
   a[i]=0;
  }
 printf("Enter k value");
 scanf("%d",&k);
 a[1]=1;
 Hamiltonian(k,n);
 }
 void Hamiltonian(int k,int n)
 {
      for(int node=1;node<=n;node++)
      {
         int flag=1;
         for(int j=0;j<k;j++)
         {
            if(a[j]==node)
             {
               flag=0;
               break;
              }
          }
         if(flag==1)
         {
           if(k==n){
           if(adj[node][a[k-1]]!=0 && adj[node][a[1]]!=0)
              a[k]=node;
            else
              return; 
            }
           else
           {
             if(adj[node][a[k-1]]!=0)
              
               a[k]=node;
              else
               continue;
            }
        
     if(a[k]==0)
       return ;
      if(k==n)
        {
          for(int i=1;i<=n;i++)
           printf("%d ",a[i]);
          printf("\n");
           return;
         }
       Hamiltonian(k+1,n);}}
    
}
      
 
             
            
  
  
