/*------------------------------------------------------------------
    Erabiltzeari n zenbaki arrunt bat eskatu [1..n] eta tarteko 
  zenbaki gutien batura kalkulatuko dion programa
--------------------------------------------------------------    */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(char* argv[], int argc)
{
  int n, i, batura;
  char str[128];

  printf("Zenbaterainoko zenbakiak batu nahi dituzu? ");
  gets_s(str, 128);
  sscanf_s(str, "%d", &n);
  batura = 0;
  for (i = 1; i <= n; i++)
  {
    batura = batura + i;
  }
  printf("%d-rainoko zenbakien batura % d da.\n", n, batura);
  printf("Sakatu \"return\" amaitzeko .....");
  gets_s(str, 128);
}