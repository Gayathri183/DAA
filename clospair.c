#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
struct point 
{
  int x,y;
 };
 
 int main()
 {
   int i,j,n,dis,min,x1,x2,y1,y2;
   min=INT_MAX;
   printf("enter no of points : ");
   scanf("%d",&n);
   struct point p[n];
    printf("enter  points : ");
   for(i=0;i<n;i++)
    scanf("%d%d",&p[i].x,&p[i].y);
    for(i=0;i<n-1;i++)
     {
       for(j=i+1;j<n;j++)
        {
          dis=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
          if(min>dis)
          {
            min =dis;
            x1=p[i].x;
            x2=p[j].x;
            y1=p[i].y;
            y2=p[j].y;
          }
        }
     }
     
     printf("distance = %d",min);
     printf("points = (%d,%d),(%d,%d)",x1,y1,x2,y2);
     return 0;
 }
 
 
