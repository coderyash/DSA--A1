#include<stdio.h>

int multiply(int x, int* arr, int size)
{
  int i,carry=0;
  for(i=0;i<size;i++)
  {
    int d = (arr[i]*x+carry);
    arr[i] = d%10;
    carry = d/10;
  }
  while(i)
  {

    if(carry==0)
    {

      break;

    }
    arr[i]=carry%10;
    carry = carry/10;
    size++;
    i++;
  }
  return size;
}
void fact(int n)
{
  int arr[1000],i;
  arr[0]=1;
  int size=1;
  for(i=1;i<=n;i++)
  {
    size =  multiply(i,arr,size);
  }
  size--;
  for(i=size;i>=0;i--)
  {
    printf("%d",arr[i]);
  }
  printf("\n");
  printf("%d\n",i );
}

int main()
{
  int n;
  scanf("%d",&n);
  fact(n);
  return 0;
}
