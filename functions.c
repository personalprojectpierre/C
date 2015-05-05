#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "functions.h"

int writeFile(void){
  int id, age, flag;
  char fileName[50];
  char buffer[50];
  char cmd[50];
  printf("Nom fichier:");
  fgets(fileName, sizeof(fileName), stdin);
  fileName[strlen(fileName) - 1] = '\0';
  printf("Quel age avez-vous ? ");
  scanf("%d", &age);
  sprintf(buffer, "Le Monsieur qui utilise le programme, il a %d ans\n", age);
  id = open(&fileName[0], O_CREAT | O_WRONLY);
  if (id == -1) {
    perror("open");
    flag = FLAG_OPEN;
  }
  if (sizeof(buffer) != write(id, buffer, sizeof(buffer))) {
    perror("write");
    flag = FLAG_WRITE;
  }
  sprintf(cmd, "sudo cat %s", fileName);
  system(cmd);
  return flag;
}

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

float fun(float x)
{
  return x+3.0;
}

float function(short int nb, float (*fun)(float))
{
  return (*fun)(2.0);
}

