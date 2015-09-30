/*--------------------------------------------------------------
Erabiltzeari n zenbaki arrunt bat eskatu zenbat digituz osatuta
dagoen esango dion programa
-------------------------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int zenbatDig = 0, n, gainBorna = 1;
  char str[128];

  printf("Emaidazu zenbaki oso bat: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &n);
  do
  {
    zenbatDig++;
    gainBorna *= 10;
  } while (gainBorna <= n);
  printf("%d zenbakia adierazteko %d digitu behar dira\n", n, zenbatDig);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}