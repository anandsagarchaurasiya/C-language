#include<stdio.h>
int main()
{
  int n;
  printf("Enter a positive integer : ");
  scanf("%d",&n);
  if(n%5==0 || n%3==0)
  {
    printf("The number is divisible");
  }
  else
  {
    printf("the number is not divisible");
  }
}