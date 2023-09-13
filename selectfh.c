#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selection(int a[],int n)
{
int i,t,j;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
       a[i]=a[j];
       a[j]=t;
      }
    }
  }
  
}
int main()
{
  clock_t s,e;
  FILE *sf;
  int a[100];
  sf=fopen("select.txt","w");
  for(int i=0;i<100;i++)
   {
     fprintf(sf,"%d",rand()%200);
     putc('\n',sf);
   }
 fclose(sf);
   int i=0;
   fopen("select.txt","r");
     while(fscanf(sf,"%d",&a[i])!=EOF)
     i++;
   fclose(sf);
   printf("\n\tarray elements\n");
   for(i=0;i<100;i++)
      printf("%d ",a[i]);
   s=clock();
   selection(a,100);
   e=clock();
     float t=(float)s-e/CLOCKS_PER_SEC;
   
   printf("\n\tsorted array\n");
   for(i=0;i<100;i++)
   printf("%d ",a[i]);
   printf("\n time = %f ",t);
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
