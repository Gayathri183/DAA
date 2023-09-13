#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void heapify(int a[],int n)
{
   for(int j=1;j<n;j++)
   {
     int child,parent;
     for(child=j;child>0;child=parent)
     {
       parent=(child-1)/2;
       if(a[parent]>a[child])         //min heap
       {
         int temp=a[parent];
         a[parent]=a[child];
         a[child]=temp;
       }
     }
   }
}/*
void heapify(int a[],int n)
{
   for(int j=1;j<n;j++)
   {
     int child,parent;
     for(child=j;child>0;child=parent)
     {
       parent=(child-1)/2;
       if(a[parent]<a[child])   //max heap
       {
         int temp=a[parent];
         a[parent]=a[child];
         a[child]=temp;
       }
     }
   }
}*/

void heapsort(int a[],int n)
{
  heapify(a,n);
  for(int i=n-1;i>0;i--)
  {
    int temp=a[i];
         a[i]=a[0];
         a[0]=temp;
      heapify(a,i);   
  }
}

int main()
{  
   clock_t s,e;
   FILE*hp;
   hp=fopen("heap.txt","w");
     for(int i=0;i<20;i++)
      {
       fprintf(hp,"%d",rand()%100);
       putc('\n',hp);
      }   
  fclose(hp);
  int i=0,a[20];
    
  fopen("heap.txt","r");
    
      while(fscanf(hp,"%d",&a[i])!=EOF)
      i++;
  fclose(hp);
  
  printf("\n\tarray elements\n ");
    for(int i=0;i<20;i++)
      printf(" %d ",a[i]);
  s=clock();
     heapsort(a,20);
  e=clock();   
  printf("\n\tsorted array;\n");
  for(int i=0;i<20;i++)
    printf(" %d ",a[i]);
  printf("\n time taken = %f",(float)e-s/CLOCKS_PER_SEC);
}





