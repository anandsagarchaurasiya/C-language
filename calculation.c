#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter your 1st value : ");
  scanf("%d",&a);
  printf("Enter your 2nd value : ");
  scanf("%d",& b);
  int q = a/b;
  int r = a-(b*q);
  printf("%d",r);
  return 0;
}