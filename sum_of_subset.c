#include<stdio.h>
#include<stdbool.h>
int ks(int wt[],int n,int w);
int wt[10],w,n;
int ks(int wt[],int n,int w){
	if(w==0)
	return true;
	if(n==0 && w!=0)
	return false;
	if(wt[n-1]<=w)
	return ks(wt,n-1,w-wt[n-1])||ks(wt,n-1,w);
	else
	return ks(wt,n-1,w);
	}
	int main(){
		int i,n,wt[n];
		printf("enter size of set");
		scanf("%d",&n);
		printf("enter arrey ele");
		for (i=0;i<n;i++){
			scanf("%d",&wt[i]);
		}
		printf("enter sum value");
		scanf("%d",&w);
		int r=ks(wt,n,w);
		printf("%d",r);
	}
