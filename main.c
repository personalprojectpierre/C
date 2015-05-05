#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[]){
 char *name[] = {"sophie","catherine"};
 float result;
 float nb, fun(float);
 system("clear");
 printArg(argc, argv);
 printf("%f\n",function(1, fun));
 printf("%d\n",addition(1,2,3,4,5,0));
 printf("%d\n",addition(2,4,8,0));
 system("ls");
 writeFile();
 printf("\n");
 return 0;
}
 /*
 short int   i; // 16 bits 
 long int    a; // 32 bits 
 float       b; // 32 bits
 double      c; // 64 bits
 long double d; // 128 bits */
