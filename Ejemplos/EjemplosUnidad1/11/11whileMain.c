/*-------------------------------------------------------------
Erabiltzeari n eta m zenbaki arruntak bat eskatu eta n m-gatik
zenbat aldiz zatitu daitekeen esango digun programa.
n=k(m**b) edierazpenetik b kalkulatuko du.
--------------------------------------------------------------*/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int n, m, kont;
  char str[128];

  printf("Emaizkidazu bi zenbaki arrunt: ");
  fgets(str,128,stdin);
  sscanf(str, "%d %d", &n, &m);
  kont = 0;
  while (n%m == 0)
  {
    n = n / m;
    kont++;
  }
  printf("%d aldiz zatitu daiteke %d-gatik\n", m, kont);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str,128,stdin);
  return 0;
}
