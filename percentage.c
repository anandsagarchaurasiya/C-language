#include<stdio.h>
int main()
{
  float Physics,Mathematics,Chemistry,English,Hindi;
  printf("Enter obtained marks\n");

  printf("Physics : ");
  scanf("%f",&Physics);

  printf("Mathematics : ");
  scanf("%f",&Mathematics);

  printf("Chemistry : ");
  scanf("%f",&Chemistry);

  printf("English : ");
  scanf("%f",&English);

  printf("Hindi : ");
  scanf("%f",&Hindi);

  float Totalmarks = (Physics+Mathematics+Chemistry+English+Hindi);

  float Averagemarks = Totalmarks/5;

  printf("%f",Averagemarks);
  return 0;


}