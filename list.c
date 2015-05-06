#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "list.h"


Elt *createElt(char *val, int count, Elt *next){
  Elt *e;
  if ((e = (Elt *) malloc(sizeof(Elt))) == NULL){
    printf("allocElt");
    // exit(EXIT_FAILURE);
  }
  if ((e->string = (char *)malloc(strlen(val)+1)) == NULL){
    printf("allocElt");
    //exit(EXIT_FAILURE);
  }
  strcpy(e->string, val);
  e->counter = count;
  e->next = next;
  return e;
}

void deleteElt(Elt *e){
  free(e->string);
  free(e);
}

void initList(List *l){
  l->head = NULL;
  l->curr = NULL;
  l->tail = NULL;
}

void deleteList(List *l){
  free(l);
}

int listEnd(List *l){
  return l->curr == l->tail;
}

void headPosition(List *l){
  l->curr = l->head;
}

int listEmpty(List *l){
  return ((l->head == NULL) && (l->tail) && (l->curr == NULL));
}

void editList(List *l){
  Elt *save;
  save = l->curr;
  puts("List edition");
  do {
    printf("%s ", l->curr->string);
    printf("%d ", l->curr->counter);
    l->curr = l->curr->next;
  }while(!listEnd(l) && !listEmpty(l));
  printf("\n\n");
  l->curr = save;
}

void insertEltHead(List *l, char *val){
  Elt *temp;
  temp = createElt(val, 1, l->head);
  l->head = temp;
  l->curr = temp;
  if (listEmpty(l))
    l->tail = temp;
}

/*
Elt *deleteEltHead(List *l){
  Elt *temp;
  if (listEmpty(l)){
    printf("List empty");
    return NULL;
  }else{
    l->curr = l>head->next;
    temp = l->head;
    l->head = l->head->next;
    return temp;
    }
*/
