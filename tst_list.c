#include "list.h"
#include "tst_list.h"

void test(void){
  int a = 0;
  List l;
  //  Elt e1,e2,e0;
  initList(&l);
  //  e1 = createElt("sex", 1, &e0);
  //  e2 = createElt("on", 1, &eO);
  insertEltHead(&l,"sex");
  editList(&l);
}

