#include<stdio.h>
int main ()
{
  int cp;
  int sp;
  printf("Enter cost Price : ");
  scanf("%d", &cp);
  printf("Enter selling price : ");
  scanf("%d", &sp);
  if(sp>cp)
  {
    printf("profit");
  }
  else{
    printf("nothing");
  }
}
      