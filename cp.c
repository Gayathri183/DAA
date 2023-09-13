//Divide & folder Closet pair
#include<stdio.h>
#include<limits.h>
#include <math.h>
struct point{
int x;
int y;
};
float Brute_force(struct point p[],int st,int end)
{
   float min=99999.0;
   int index_i,index_j;
   for(int i=st;i<end;i++)
   {
     for(int j=i+1;j<=end;j++)
     {
        float d=sqrt((p[j].x-p[i].x)*(p[j].x-p[i].x)+(p[j].y-p[i].y)*(p[j].y-p[i].y));
        if(d<min)
         {
         min=d;
         index_i=i;
         index_j=j;
         }
      }
   }
  printf("\n (%d,%d) (%d,%d)  ",p[index_i].x,p[index_i].y,p[index_j].x,p[index_j].y);
  return min;
}
void sort(struct point p[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
          if(p[j+1].x<p[j].x)
          {
             int t;
             t=p[j+1].x;
             p[j+1].x=p[j].x;
             p[j].x=t;
              t=p[j+1].y;
             p[j+1].y=p[j].y;
             p[j].y=t;
             
           }
      }
  }
for(int i=0;i<n;i++)
  printf("%d,%d ",p[i].x,p[i].y);
}
float CP(struct point p[],int st,int end)
{
  
  if(end-st<3)
    Brute_force(p,st,end);
  else{
    float dl,dr,s;
    int mid=(st+end)/2;
    dl=CP(p,st,mid);
    dr=CP(p,mid+1,end);
    float l=(dl>dr)?dr:dl;
    printf("%f %f ",dl,dr);
    int k=0;
    struct point strip[100];
    for(int i=st;i<=end;i++)
      {
        if(p[i].x>=p[mid].x-l && p[i].x<=p[mid].x+l)
        strip[k++]=p[i];
      }
    float db=Brute_force(p,0,k);
    return s=(db<l)?db:l;
  
 }
}
void main()
{
  int n;
  printf("n");
  scanf("%d",&n);
  struct point p[n];
  printf("Cordinates(x,y) :");
  for(int i=0;i<n;i++)
    scanf("%d%d",&p[i].x,&p[i].y);
   sort(p,n);
   float k=CP(p,0,n-1);
   printf("\n%f\n",k);
 }
 
    
           

