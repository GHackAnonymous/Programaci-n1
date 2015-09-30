/*-----------------------------------------------------
string.ak azaltzeko lehendabiziko adibidea
------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
  char str1[128];
  char str2[] = "abcdefghijk";
  unsigned int n, i;

  printf("Idatzi esaldi bat: ");
  fgets(str1, 128, stdin);
  n = 0;
  for (i = 0; i<strlen(str1); i++)
    if (str1[i] == 'a') n++;
  printf("\n\"%s\" esaldian %d aldiz dago 'a' letra\n", str1, n);
  n = 0;
  i = 0;
  while (str2[i] != '\0')
  {
    if (str1[i] == 'a') n++;
    i++;
  }
  printf("\n\""); printf(str2); printf("\"");
  printf(" esaldian %d aldiz dago 'a' letra\n", n);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str1, 128, stdin);
  return 0;
}