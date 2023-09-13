#include<stdio.h>
#include<stdbool.h>
#define INF 9999999
#define v 5
int g[v][v]={
{0,9,75,0,0},
{9,0,95,19,42},
{75,95,0,51,66},
{0,19,51,0,31},
{0,42,66,31,0}};
int main(){
int edge;
int s[v];
s[0]=true;
int x,int y;
printf("edge wt");
while(nedge<v-1)
int min=INF;
x=0;y=0;
for(int i=0;i<v;i++){
if(s[i]){
for(int j=0;j<v;j++){
if(!s[j] && g[i][j]){
if(min>g[i][j]){
min=g[i][j];
x=i;
y=j;
}}}}}
printf("%d-%d:%d\n",x,y,g[x][y]);
s[y]=true;
nedge++;
}
return 0;
}

