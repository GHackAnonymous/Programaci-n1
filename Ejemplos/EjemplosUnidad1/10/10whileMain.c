/*------------------------------------------------------------------
  Erabiltzeari n zenbaki arrunt bat eskatu zenbat digituz osatuta
dagoen esango dion programa
--------------------------------------------------------------    */
#include <stdio.h>

int main(int argc, char* argv[])
{
  int zenbatDig, n, gainBorna;
  char str[128];

  printf("Emaidazu zenbaki oso bat: ");
  fgets(str,128,stdin);
  sscanf(str, "%d", &n);
  zenbatDig = 1;
  gainBorna = 10;
  while (gainBorna<=n)
  {
    zenbatDig++;
    gainBorna *= 10;
  }
  printf("%d zenbakia adierazteko %d digitu behar dira\n", n, zenbatDig);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str,128,stdin);
  return 0;
}
