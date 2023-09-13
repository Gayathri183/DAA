#include<stdio.h>

void merge(int a[],int l,int h,int m)
{
int b[h];
int i=l;
int j=m+1;
int k=l;

while(i<=m&&j<=h)
{
if(a[i]<a[j])
b[k++]=a[i++];
else
b[k++]=a[j++];
}


while(i<=m)
b[k++]=a[i++];
while(j<=h)
b[k++]=a[j++];

k=l;
for(k=1;k<h;k++)
a[k]=b[k];
}

void mer(int a[],int l,int h)
{
if(l<h){
int m=(l+h)/2;
mer(a,l,m);
mer(a,m+1,h);
merge(a,l,h,m);

}
}


int main()
{
int a[5];
printf("enter");
for(int i=0;i<5;i++)
scanf("%d",&a[i]);
mer(a,0,4);
for(int i=0;i<5;i++)
printf("%d",a[i]);
}
