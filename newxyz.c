#include <stdio.h>
int main (){
  float english, hindi,chemistry;
  printf("enter obtain marks in \n ");

  printf("english");
  scanf("%f",&english);
  
  printf("hindi");
  scanf("%f",& hindi);

  printf("chemistry");
  scanf("%f",& chemistry);

  float marks = (english+hindi+chemistry);
  float obtain = (marks/3);
  printf("%f",obtain);

}