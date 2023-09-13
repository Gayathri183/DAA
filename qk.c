#include<stdio.h>
#define n 5

int qk(int a[],int l,int h)
{
int i=l;
int j=h;
int pi=l;

while(i<j)
{
while(a[i]<=a[pi])
i++;
while(a[j]>a[pi])
j--;
if(i<j)
{
int t=a[i];
a[i]=a[j];
a[j]=t;

}

}

int e=a[j];
a[j]=a[pi];
a[pi]=e;

return j;
}

void qs(int a[],int l,int h)
{

if(l<h)
{
int pi=qk(a,l,h);
qs(a,l,pi);
qs(a,pi+1,h);
}

}

int main()
{
int a[n];
printf("enter elementrs");

for(int i=0;i<n;i++)
scanf("%d",&a[i]);
qk(a,0,n-1);
printf("%d",a[0]);
for(int i=0;i<n;i++)
printf("\n%d",a[i]);
return 0;
}


