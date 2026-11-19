#include<stdio.h>
int main()
{
  int l,b;
   printf("Enter length : ");
   scanf("%d",&l);
   printf("Enter Breadth : ");
   scanf("%d",&b);
   int A,P;
   A = l*b;
   P = l+l+b+b;
   if(A>=P)
   {
    printf("Area greater than permimeter of rectangle");
   }
   else
   {
    printf("Permiter is greater than area of reactangle");
   }



}