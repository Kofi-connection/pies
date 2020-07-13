#include <stdio.h>
int main (void){
 int year;
 printf ("Type in a year: ");
 scanf("%d ",&year);
 
 if(year%4 ==0){
   if((year%100==0)&&(!(year%400==0))){
    printf( "It is not a leap year ");
     return 0;
    }
  printf("it is a leap year ");
  }
  else {
   printf("It is not a leap year");
  }
 return 0;
}
