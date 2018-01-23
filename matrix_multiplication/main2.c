#include<stdio.h>

int main()
{
	int r1,c1,i,j,r2,c2,k;
	scanf("%d %d",&r1,&c1);
	int max1[r1][c1];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d ",&max1[i][j]);
		}
	}
	printf("%d %d\n",i,j);
	printf("matrix 1 done\n");
	scanf("%d %d",&r2,&c2);
	int max2[r2][c2];
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d ",&max2[i][j]);
		}
	}
	printf("matrix 2 done\n");

	if(r2==c1)
	{
		int mul[r1][c2];
		int sum=0;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					sum = sum + max1[i][k]*max2[k][j];
				}
				mul[i][j]=sum;
				sum=0;
			}
		}
		sum=0;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				sum = sum + mul[i][j];
			}
		}
		printf("%d\n",sum);
	}
	else
		return 0;

	return 0;
}
