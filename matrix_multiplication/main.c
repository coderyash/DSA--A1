#include<stdio.h>
#include<string.h>
void multiply(int* max1, int r1, int c1, int* max2, int r2, int c2 )
{
	int final[r1][c2];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				sum = sum + (max+)
			}
		}
	}
}
void scan(int* max, int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",((max+i*c) + j));
			//scanf("%d",&max[i][j]);
		}
	}
}
int main()
{
	int r,c,i,j;
	scanf("%d %d",&r1,&c1);
	int max1[r][c];
	scan(&max1[0][0],r1,c1);
	/*for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",max[i][j]);
		}
		printf("\n");
	}*/
	scanf("%d %d",&r2,&c2);
	int max2[r][c];
	scan(&max2[0][0],r2,c2);
	multiply(&max1[0][0],r1,c1,&max2[0][0],r2,c2)
	//scan(&max[0][0],r,c);
	return 0;
}