#include<stdio.h>


void binary(long long int num )
{
	int n,sum=0;
	while(num)
	{
		n = num%2;
		num = num/2;
		if(n==1)
		{
			sum++;
		}  
	}
	printf("%d\n",sum);
}

int main()
{
	long long int num;
	scanf("%lld",&num);
	binary(num);
}