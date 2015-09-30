/*------------------------------------------------------------------------------------------------
Erabiltzeari n zenbaki arrunt bat eskatu eta *-z n*n dimentsioko karratua irudikatuko dion programa
--------------------------------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int n, i, j;
  char str[128];

  printf("Emaidazu karratuaren dimentsioa: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++) printf("*");
    printf("\n");
  }
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}
