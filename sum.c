#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter value of x&y");
  scanf("%d %d",& x,y);
  int sum = x+y;
  printf("x=%d y=%d",x,y);
  return 0;
}