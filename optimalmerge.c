#include<stdio.h>
void heapify(int a[],int n)
{
   for(int j=1;j<n;j++)
   {
     int child,parent;
     for(child=j;child>0;child=parent)
     {
       parent=(child-1)/2;
       if(a[parent]>a[child])
       {
         int temp=a[parent];
         a[parent]=a[child];
         a[child]=temp;
       }
     }
   }
}

int heapsort(int a[],int n)
{
  int x,y,sum=0;
  heapify(a,n);
  for(int i=n-1;i>0;i--)
  {
    x=a[0];
    a[0]=a[i];
    heapify(a,i);  
    sum=sum+a[0]+x;
    a[0]=a[0]+x;
    printf("minsum = %d ",a[0]);
    heapify(a,i);
  }
  return sum;
}
int main()
{
  int a[]={20,30,40,90};
  int s=heapsort(a,4);
  printf("\noptimal merge operations = %d ",s);
  return 0; 
}





