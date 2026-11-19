#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter age ram : ");
  scanf("%d", &a);
  printf("Enter age shyam : ");
  scanf("%d", &b);
  printf("Enter age ajay : ");
  scanf("%d", &c);
  if (b > a && c > a)
  {
    printf("%d youngest", a);
  }
  if (a > b && c > b)
  {
    printf("%d youngest", b);
  }
  if (a > c &&  b > c)
  {
    printf("%d youngest", c);
  }
  return 0;
} 