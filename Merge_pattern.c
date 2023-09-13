//Optimal Merge Pattern
#include<stdio.h>
void swap(int *a,int *b);
void Heapify(int a[],int i,int n)
{
  int smallest=i;
  int l=(2*i),r=(2*i)+1;
  while(l<=n && a[l]<a[smallest])
    smallest=l;
   while(r<=n && a[r]<a[smallest]);
    smallest=r;
   if(smallest!=i)
   {
     swap(&a[smallest],&a[i]);
     Heapify(a,smallest,n);
    }
 }
 void heapSort(int a[],int n)
 {
  for(int i=n/2;i>=1;i--)
   Heapify(a,i,n);
  for(int i=n;i>=1;i--)
    {
      swap(&a[1],&a[i]);
      Heapify(a,1,n);
    }
 }
void swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
void main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  printf("Enter the Elements to an array");
  for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
  heapSort(a,n);
  for(int i=0;i<n;i++)
     printf("%d",a[i]);
}   
