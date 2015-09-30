/*------------------------------------------------------------------
Erabiltzeari bi zenbaki eskatu eta txikitik haundira ordenatuta
pantailaratuko dizkion programa
------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int x, y, tmp;
  char str[128];

  printf("Emaizkidazu 2 zenbaki oso: ");
  fgets(str,128,stdin);
  sscanf(str, "%d %d", &x, &y);
  if (x >= y)
  {
    tmp = x;
    x = y;
    y = tmp;
  }
  printf("%d <= %d \n", x, y);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}