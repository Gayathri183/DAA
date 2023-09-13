#include<stdio.h>
#include<string.h>
#include<time.h>
void string(char s1[],char s2[],int m,int n)
{
  int i,j,f;
  for(i=0;i<m-n+1;i++)
  {
     for(j=i;j<i+n;j++)
     {
      f=0;
      if(s1[j]!=s2[j-i])
      {f=1; break;}
      else 
      continue;
     }
     if(f==0)
     { 
     break;}
  }
  if(f==0)
  printf("string is found at %d position",i+1);
  else
  printf("string not found");
}

int main()
{
  char s1[100],s2[50];
  int m,n;
  printf("enter s1 ");
  scanf("%s",s1);
  printf("enter s2 ");
  scanf("%s",s2);
  m=strlen(s1);
  n=strlen(s2);
  clock_t st,end;
  srand(time(0));
  st=clock();
  string(s1,s2,m,n);
  end=clock();
  float tt=(float)end-st/CLOCKS_PER_SEC;
  printf("\ntime = %f",tt);
  return 0;
}
