#include "tst_functions.h"

void test_functions(void){
	MyUnion myUnion;
	MyStruct myStruct;

	printf("Union size = %d bytes\n",sizeof(myUnion));
    printf("Structure size = %d bytes\n",sizeof(myStruct));
	printf("Union adresse = %p\n",&myUnion);
    printf("Adresse de la partie enti�re = %p\n",&myUnion.integer);
    printf("Adresse de la partie r�elle = %p\n",&myUnion.real);
}