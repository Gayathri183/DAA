//Convex hull   ax+by=c;
#include<stdio.h>
#include<limits.h>
struct point{
int x,y;
};
void main()
{
  int n;
  
  printf("Enter number of points");
  scanf("%d",&n);
  struct point p[n];
  printf("enter coordinates (x,y)\n");
  for(int i=0;i<n;i++)
     scanf("%d%d",&p[i].x,&p[i].y);
  for(int i=0;i<n;i++)
  {
     for(int j=i+1;j<n;j++)
     {
        int a=p[j].y-p[i].y;
        int b=p[i].x-p[j].x;
        int c=p[i].x*p[j].y-p[j].x*p[i].y;
        int fp=0,fn=0;
        for(int k=0;k<n;k++)
        {
           if(k!=i && k!=j)
           {
             if(a*p[k].x+b*p[k].y-c<=0)
               fn=1;
             else if(a*p[k].x+b*p[k].y-c>=0)
                fp=1;
           }
        }
        if((fn==0 && fp==1) || (fn==1 && fp==0))
           printf("(%d,%d),(%d,%d)\n",p[i].x,p[i].y,p[j].x,p[j].y);
       // else
         // printf("not"); 
     }
 }
} 
 

     
