#include<stdio.h>
#include<string.h>


void encoding(char* str, int n,int m)
{
	int i=0,k=0,j;
	char dummy;
	if(m==0)
	{	
		while(i<=n-1)
		{
				if(str[i]==' '||i==n-1)
				{
					for(j=1;j<=k/2;j++)
					{
						dummy = str[i-j];
						str[i-j] = str[i-k+(j-1)];
						str[i-k+(j-1)] = dummy;
					}
					//printf("%d\n",k);
					k=0;

				}
				else
				{
					if(str[i]>'w')
					{
						str[i] = str[i]-23;
						//printf("%c\n",str[i]);
					}	
					else
					{
						str[i]=(str[i]+3);
						//printf("%c\n",str[i]);
					}	
	 				k++;
				}
				i++;
		}	
		//printf("%d\n",i);		
							
	}
	
	else
	{
		while(i<=n-1)
		{
			if(str[i]==' '||i==n-1)
			{
				for(j=1;j<=k/2;j++)
				{
					dummy = str[i-j];
					str[i-j] = str[i-k+(j-1)];
					str[i-k+(j-1)] = dummy;
				}
				//printf("%d\n",k);
				k=0;

			}
			else
			{
				if(str[i]<'d')
				{
					str[i] = str[i]+23;
				}
				else
				{	
					str[i]=(str[i]-3);
	 				
	 			}
	 			k++;	
			}
			i++;
		}
	}
	printf("%s\n",str);
	
}
int main()
{
	char str[100];
	fgets(str,100,stdin);
	int n = strlen(str);
	//printf("%d\n",n);
	int m;
	encoding(str,n,0);
	printf("if you want to get the lettes back press 1 else press anything else\n" );
	scanf("%d",&m);
	if(m==1)
		encoding(str,n,1);
	return 0;



}