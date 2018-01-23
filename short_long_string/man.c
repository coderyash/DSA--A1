#include<stdio.h>
#include<string.h>

int cmp(char* dummy, char* shor,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(dummy[i]!=shor[i])
			return 0;
	}
	return 1;
}
int len(char* shor)
{
	int i=0;
	while(shor[i]!='\0')
		i++;
	//printf("%c",shor[i-2]);
	//printf("%d\n",i);
	return i-1;
}
void numberofstring(char* shor,char* lon)
{
	int i=0,k=0,sum=0;
	int n1 = len(shor);
	int n2 = len(lon);
	printf("%d\n%d\n",n1,n2);
	char dummy[n1];
	while(i<=n2)
	{
		
		if(lon[i]==' '|| i==n2)
		{
			
			if(cmp(dummy,shor,n1))
				sum++;
			k=-1;
		}
		else
			dummy[k]=lon[i];
		i++;
		k++;
	}
	printf("%c",lon[i-1]);
	printf("%d\n",i);
	printf("%d\n",sum);

}

int main()
{
	char shor[10],lon[100];

	
	fgets(shor,10,stdin);
	fgets(lon,100,stdin);
	
	//printf("%s\n",shor );
	//printf("%s\n",lon );
	numberofstring(shor,lon);
	return 0;
}