
# include <stdio.h>
#include <stdlib.h>
int main ()
{
 int counte;
 FILE *fp;
 char e='e';
 printf("Opening the file in read mode\n");
 fp = fopen ( "ceaser1.txt ", "r");
 if (fp == NULL){
  printf("Could not open ceaser1.txt \n");
  exit(EXIT_FAILURE);
  return 1;
  }
 while(fgetc(fp)!= EOF){
 if (e== fgetc(fp)){
  counte++;
  }
 }
 printf("The number of e's is %d\n",counte);
 return 0; 
}





















