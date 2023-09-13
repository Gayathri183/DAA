#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
	}
	printf("%d",sum);
	return 0;
}
