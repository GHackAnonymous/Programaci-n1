#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int i;
  float f;
  char str[128];

  printf("Emaidazu zenbaki oso bat: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &i);
  printf("Eta orain zenbaki erreal bat: ");
  fgets(str, 128, stdin);
  sscanf(str, "%f", &f);
  printf("%d eta %f zenbakiak eman dizkidazu\n", i, f);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}