#include <stdio.h>

#include "functions.h"
#include "file.h"
#include "pointer.h"

#include "tst_list.h"
#include "tst_functions.h"

int main(int argc, char *argv[]){
  float add(float), mul(float), nb=3.0;
  //test();
  test_functions();  
  //system("clear");
  // Inputs program using
  printArg(argc, argv);
  // Function pointer
  printf("%f\n",function(nb, add));
  printf("%f\n",function(nb, mul));
  // Variable number of arguments
  printf("%d\n",addition(1,2,3,4,5,0));
  printf("%d\n",addition(2,4,8,0));
  // Linux command executed by program
  //system("ls");
  // File writing
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
