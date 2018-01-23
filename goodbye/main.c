#include<stdio.h>
#include<string.h>

int goodbye(char* str, char* gb, int i,int j,int sum ,int n )
{
	if(sum==7)
	{
			printf("YES\n");
			return 0;
	}		
	else if(i==n)
	{
			printf("NO\n");
			return 0;
	}
	if(str[i]==gb[j])
	{
		return goodbye(str,gb,++i,++j,++sum,n);
	}
	else 
	{
		return goodbye(str,gb,++i,j,sum,n);
	}
}
int main()
{
	char str[100];
	fgets(str,100,stdin);
	int n = strlen(str);
	char gb[] ="goodbye";
	goodbye(str,gb,0,0,0,n-1);
	return 0;
}