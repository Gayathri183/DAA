#include<stdio.h>
#include<stdlib.h>
#include<time.h>



void bubble_sort(int a[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

}

int main()
{
   clock_t s,e;
   FILE*bh;
   bh=fopen("bubble.txt","w");
    for(int i=0;i<15;i++)
      { 
         fprintf(bh,"%d",rand()%1000);
         putc('\n',bh);
      }
   fclose(bh);      
  int a[15],i=0;
  fopen("bubble.txt","r");
    while(fscanf(bh,"%d",&a[i])!=EOF)
     i++;
  fclose(bh);   
   printf("\n\t array elements\n");
  for(i=0;i<15;i++)
    printf("%d ",a[i]);
  s=clock();  
   bubble_sort(a,15);
  e=clock(); 
    printf("\n\tsorted array \n");
  for(i=0;i<15;i++)
   printf("%d ",a[i]);
  printf("\n\t time taken = %f",(float)e-s/CLOCKS_PER_SEC);

}

