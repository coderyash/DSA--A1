#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int arr[127],i,t=0;
	fgets(str,100,stdin);
	int n = strlen(str);
	for(i=0;i<127;i++)
	{
		arr[i]=0;
	}
	for(i=0;i<n-1;i++)
	{
		//if(str[i]==' ')
		//	t++;
		arr[str[i]]++;
	}
	for(i=0;i<127;i++)
	{
		if(arr[i]!=0)
			printf("%d\t%c\t%d\n",i,i,arr[i]);
	}
	//printf(" \t%d\n",t);
	return 0;
}
