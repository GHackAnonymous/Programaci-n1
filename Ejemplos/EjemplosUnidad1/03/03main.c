/*------------------------------------------------------------------------------------------------
Erabiltzeari zenbaki arrunt bat eskatu eta bikoitia hala bakoitia den esango dion programa
--------------------------------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int n;
  char str[128];

  printf("Emaidazu zenbaki arrunt bat: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &n);
  if (n == 0)
  {
    printf("Ez adarrik jo. emandako zenbakio 0 da.\n");
  }
  else
  {
    if (n % 2 == 0) printf("%d bikoitia da\n", n);
    else printf("%d bakoitia da\n", n);
  }
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}