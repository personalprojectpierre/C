#ifndef FUNCTIONS
#define FUNCTIONS

typedef union MyUnion MyUnion;
typedef struct MyStruct MyStruct;

union MyUnion
{
    int integer;
    double real;
};

struct MyStruct
{
    int integer;
    double real;
};

void printArg(int argc, char *argv[]);
int addition(int n0, ...);


#endif


