#include<stdio.h>
int main ()
{
  float M = 80;
  float E = 80;
  float H = 80;
  float P = 75;
  float C = 75;
  float Z = M+E+H+P+C;
  float T = 500;
  printf("%f",Z/T);
  float ZZ = Z/T*100;
  printf("\n%f",ZZ);
  return 0;
}