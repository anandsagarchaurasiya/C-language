#include<stdio.h>
int main()
{
  int n;
  printf("Enter number : ");
  scanf("%d",&n);
  if(n<0){
    n=n*(-1);
    printf("The Absolute Value is : %d ",n);
  }
  else{
    n=n;
    printf("The Absolute Value is %d", n);
  }
}