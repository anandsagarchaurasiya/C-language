#include<stdio.h>
int main()
{
float Rate;
printf("Enter Rate : ");
scanf("%f",&Rate);
float Principle;
printf("Enter Principle : ");
scanf("%f",& Principle);
float Time;
printf("Enter Time : ");
scanf("%f",& Time);
float SI = (Rate*Principle*Time)/100;
printf("%f your simple interest" ,SI);
} 