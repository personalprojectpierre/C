#ifndef LIST
#define LIST
/*!
 * \file liste.h
 * \brief List 
 */
typedef struct Elt Elt;
typedef struct List List;

struct Elt{
  char *string; /*!< Pointer toward a word */
  int counter; /*!< Number of occurence */
  Elt *next; /*!< Pointer on the next element */
};

struct List{
  Elt *head;
  Elt *curr;
  Elt *tail;
};

Elt *createElt(char *val, int count, Elt *next);
void deleteElt(Elt *e);

void initList(List *l);
void deleteList(List *l);

int listEnd(List *l);
void headPosition(List *l);
int listEmpty(List *l);
void editList(List *l);

void insertEltHead(List *l, char *val);

//Elt *deleteEltHead(List *l);

#endif
