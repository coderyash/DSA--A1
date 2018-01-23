#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int checksymetry(char* arr ,int k)
{
	int i,j;
	for(i=0;i<k;i++)
	{
		for(j=0;j<i;j++)
		{
			if(*((arr+i*k)+j) != *((arr+j*k)+i))
			return 0;
		}
	}
	return 1;
}
void magic(char std[][100],int num)
{
	int len;
	int i,j,k,n,m;
	for(i=0;i<num;i++)
	{
		len = strlen(std[i]);
		printf("%d\n",len );

		for(j=1;j<11;j++)
		{
			if(j*j==len)
				break;
		}
		if(j==11)
			{
				printf("it is not a magic square 1 \n");
				break;
			}

		for(k=0;k<len/2;k++)
		{
			if(std[i][k]!=std[i][len-k-1])
				{
					printf("it is not a magic square 2 \n");
					break;
				}

		}
		char arr[j][j],t=0;
		for(n=0;n<j;n++)
		{
			for(m=0;m<j;m++)
			{
				arr[n][m] = std[i][t];
				t++;
			}
		}
		int h = checksymetry(&arr[0][0],j);
		if(h)
			{
				if(k==len/2)
					printf("Yes it is a magic square\n");
			}
		else
			printf("it is not a magic square\n");
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	char std[n][100];
	for(i=0;i<n;i++)
	{
		//fgets(std[i],100,stdin);
		scanf("%s",std[i]);
	}
	/*for(i=0;i<n;i++)
	{
		printf("%s\n", std[i]);
	}*/
	magic(std,n);




	return 0;
}
