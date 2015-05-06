#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#include "file.h"

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
