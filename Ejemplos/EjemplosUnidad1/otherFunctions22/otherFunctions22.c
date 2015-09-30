#include "otherFunctions22.h"

int faktorial(int n)
{
  int i, emaitz = 1;

  for (i = 2; i <= n; i++) emaitz *= i;
  return emaitz;
}