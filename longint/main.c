#include<stdio.h>


void power(int n)
{
	int i;
	long long int num = 1; 
	for(i=1;i<=n;i++)
	{
		num = num*2;
		num = num%10000000000;
	}

	printf("%lld\n",num);
}
int main()
{
	
	int n;
	scanf("%d",&n);
	//long long int d;
	//scanf("%lld",&d);
	//printf("%lld\n",d);
	power(n);
	return 0;
}