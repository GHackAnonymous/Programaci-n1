/*----------------------------------------------------------------
Erabiltzeari n eta m zenbaki arruntak eskatu eta n elementu m-naka
konbinatzeko zenbat aukera ezberdin dauden esango dion programa
----------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int i, n, m, nFakt, mFakt, nmFakt, emaitz;
  char str[128];

  printf("Zenbat elementu nahi zenituzke konbinatu: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &n);
  printf("zenbatnaka: ");
  fgets(str, 128, stdin);
  sscanf(str, "%d", &m);
  nFakt = 1;
  for (i = 2; i <= n; i++) nFakt *= i;
  mFakt = 1;
  for (i = 2; i <= m; i++) mFakt *= i;
  nmFakt = 1;
  for (i = 2; i <= n - m; i++) nmFakt *= i;
  emaitz = nFakt / mFakt / nmFakt;
  printf("%d elementu %d naka konbinatzeko %d aukera daude\n", n, m, emaitz);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}