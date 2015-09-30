#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
  float a, b, c, r1, r2, d;
  char str[128];

  printf("Emaizkidazu ax^2+bx+c=0 erako bigarren mailako ekuazio baten a,b,c konstanteak: ");
  fgets(str, 128, stdin);
  sscanf(str, "%f %f %f", &a, &b, &c);
  if ((a == 0) && (b == 0))
    printf("Hori ez da ekuazio bat\n");
  else if (a == 0)
  {
    r1 = -c / b;
    printf("Emandako ekuazio 1go mailakoa de eta bere erro bakarra hauxe da: %f\n", r1);
  }
  else
  {
    d = b*b - 4 * a*c;
    if (d < 0) printf("Ez du erro errealik\n");
    else if (d == 0)
    {
      r1 = -b / (2 * a);
      printf("erro bikoitza du: %f\n", r1);
    }
    else
    {
      r1 = (-b + sqrt(d)) / (2 * a);
      r2 = (-b - sqrt(d)) / (2 * a);
      printf("honakoak dira bere bi erroak: %f eta %f.\n", r1, r2);
    }
  }
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}