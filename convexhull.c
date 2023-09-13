#include<stdio.h>
#include<stdlib.h>

struct point
{
  int x,y;
};


int main()
{
  int n,i,j,np,nn;
  float a,b,c,d;
  printf("enter no of points :");
  scanf("%d",&n);
  struct point p[n];
  printf("enter coordinate points\n");
  for(i=0;i<n;i++)
  scanf("%d%d",&p[i].x,&p[i].y);
  
  printf("convex hul points ");
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {  np=0,nn=0;
      a=p[i].y-p[j].y;
      b=p[j].x-p[i].x;
      c=(p[i].x*p[j].y)-(p[i].y*p[j].x);
      for(int k=0;k<n;k++)
      {       
        if(k==i||k==j)
         continue;
        else
        { 
          d=a*(p[k].x)+b*(p[k].y)+c;
          if(d>0)
          np++;
          else if(d<0)
          nn++;
        }
      }
    
     if(np==0||nn==0)
      printf("(%d,%d),(%d,%d)",p[i].x,p[i].y,p[j].x,p[j].y);
      printf("\n");
         
     }}
      
return 0;
}
