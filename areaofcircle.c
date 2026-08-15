#include<stdio.h>
int main ()
{
  float radius;
  printf("Enter radius :");
  scanf ("%f",&radius);
  float Pi = 3.14156;
  float area = Pi*radius*radius;
  printf("%f",area);
  return 0;
}