#include <stdio.h>

int main (int argc, char *argv[]){

 int i, size, shift =3;

 if (argc !=2){
  printf("Type in the needed string\n");
 return 0;
 }

 char *input= argv[1];
 size= sizeof(input);
 char result[size];
 

 for (i = 0; i < size; i++){
 if (input[i]>=65 && input[i] <= 90)
  input[i]+=32;
 if (input[i] >= 97 && input[i] <= 122) 
  result[i] = ( input[i] - 97 + shift) % 26 + 97;

 }
 
 printf("Original string: \t %s\n", input);
 printf("String size: \t %d\n" , size);
 printf("String shift (%d): \t %s\n", shift, result);
 return 0;
}
