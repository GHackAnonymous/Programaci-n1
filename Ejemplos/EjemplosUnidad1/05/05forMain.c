/*------------------------------------------------------------------
Erabiltzeari zenbaki arrunt bat eskatu horrenbeste *-tako ilara
marraztuko dion programa
------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int n, i;
  char str[128];

  printf("Emaidazu ilararen luzera: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("*");
  }
  printf("\n");
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}