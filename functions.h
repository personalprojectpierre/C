#ifndef FUNCTIONS
#define FUNCTIONS

#define FLAG_OPEN 1
#define FLAG_WRITE 2
#define FLAG_LSEEK 3
#define FLAG_WRITE_BIS 4

int writeFile(void);
void printArg(int argc, char *argv[]);
int addition(int n0, ...);
float fun(float x);
float function(short int nb, float (*fun)(float));

#endif


