#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct character
{
  char ch;
  int count;
};
int main()
{
  int k=-1;
  int i,j;
  char input[100];
  fgets(input,100,stdin);
  int l = strlen(input);
  l=l-1;
  struct character* str = malloc(l*sizeof(struct character));
  int flag;
  for(i=0;i<l;i++)
  {
    flag = 0;
    for(j=0;j<=k;j++)
    {
      if(input[i]==str[j].ch)
      {
        str[j].count++;
        flag=1;
      }

    }
    if(flag==0)
    {
      k++;
      str[k].ch = input[i];
      str[k].count=1;

    }
  }
  for(i=0;i<=k;i++)
  {
    printf("%c %d\n",str[i].ch,str[i].count);
  }

}
