#include "pointer.h"

float add(float x)
{
  return x+x;
}

float mul(float x)
{
  return x*x;
}

float function(short int nb, float (*fun)(float))
{
  return (*fun)(nb);
}
