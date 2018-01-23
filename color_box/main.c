#include<stdio.h>
#include<stdlib.h>


void color_box(int c, int n, int p)
{
	int i;
	long long int num = 1;
	for(i=1;i<=n;i++)
	{
		num = num*c;
		num = num%p;
	}
	printf("%lld\n",num);
}
int main()
{
	int c,n,p;
	scanf("%d %d %d",&c,&n,&p);
	color_box(c,n,p);
	return 0;
}