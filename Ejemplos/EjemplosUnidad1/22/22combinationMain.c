/*-----------------------------------------------------------------
Erabiltzeari n eta m zenbaki arruntak eskatu eta n elementu m-naka
konbinatzeko zenbat aukera ezberdin dauden esango dion programa
------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "otherFunctions22.h"

int main(int argc, char* argv[])
{
  int  n, m, emaitz;
  char str[128];

  printf("Zenbat elementu nahi zenituzke konbinatu: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &n);
  printf("zenbatnaka: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &m);
  emaitz = faktorial(n) / faktorial(m) / faktorial(n - m);
  printf("%d elementu %d naka konbinatzeko %d aukera daude\n", n, m, emaitz);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}
