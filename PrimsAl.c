#include<stdio.h>
#include <limits.h>
//Prims Algorithm to find out the minimum distance paths covering all vertices without the loop

/*int a[4][4]={{0,3,2,0},
       {3,0,0,5},
       {2,0,0,6},
       {0,5,6,0}};*/
/* int a[6][6]={{0,5,0,0,0,6},
               {5,0,3,0,2,0},
               {0,3,0,7,0,4},
               {0,0,7,0,9,0},
               {0,2,0,9,0,8},
               {6,0,4,0,8,0}};*/
 /*int a[6][6]={{0,2,0,0,0,3},
               {2,0,6,0,5,0},
               {0,6,0,4,0,7},
               {0,0,4,0,8,0},
               {0,5,0,8,0,9},
               {3,0,7,0,9,0}};0-1 = 2 0-5 = 3 1-4 = 5 1-2 = 6 2-3 = 4 20 */
       
int a[4][4];
void Prims_Algorithm(int a[][4],int v,int visited[])
{
 int sum=0;
 visited[0]=1;
  for(int l=0;l<v-1;l++)
  {
    
    int min=9999,index,ival;
    for(int i=0;i<v;i++)
    {
      if(visited[i]==1)
      {
        for(int j=0;j<v;j++)      //it is to find the minimum distance possible between that vertex to other
        {
           if(visited[j]!=1 && a[i][j]!=0) //checkig whether the node is visted or not
           {
              
              if(min>a[i][j])
               {
               min=a[i][j];
               index=j;
               ival=i;
               }
            }
         }
        }
   }
         visited[index]=1; 
         printf("%d-%d = %d ",ival,index,a[ival][index]);
         sum=sum+a[ival][index];    
          
  }
  printf("%d",sum);
}
 

void main()
{
  int v;
  printf("Enter number of Vertices:");
 scanf("%d",&v);

 printf("Enter the Edges that are exist in the Graph if edge not present enter 9999 \n ");
for(int i=0;i<v;i++)
  {
    for(int j=0;j<v;j++)
    {
      //printf("a[%d][%d]=",i,j);
      scanf("%d",&a[i][j]);
     }
  }
 int visited[v];
for(int i=0;i<v;i++)
  visited[i]=0;
Prims_Algorithm(a,v,visited);
 
}
   
