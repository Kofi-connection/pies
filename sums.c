#include <stdio.h>

int main (void){
 int i;
 int sum=0;
 for (i=1;i<1000;i++){
   if (i%3==0){
     sum=i+sum;
   }
   else if (i%5==0){
     sum=i+sum;
   }
 }
 printf("The sum is  %d", sum);
 
 return 0;
}
