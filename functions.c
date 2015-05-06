#include <stdarg.h>
#include <stdio.h>
#include "functions.h"

void printArg(int argc, char *argv[]){
  int i;
  for (i=1; i < argc; i++)
    printf("%s%c", argv[i], (i < argc - 1) ? ' ': '\n');
}

int addition(int n0, ...){
  va_list va; 
  int i, sum, n;
  sum = n0;  
  va_start (va, n0);
  while( (n=va_arg(va, int)) != 0)
    sum += n;
 
  va_end (va);
  printf("\n");
  return sum;
}


