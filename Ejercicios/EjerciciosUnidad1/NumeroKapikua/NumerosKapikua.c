#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[]){
	  int n, m, j;
	  n = 0;
	  m = 0;
	  j = 0;
	  char str[128];
	  printf("Eman zenbaki oso bat kapikua den jakiteko:");
	  fgets(str, 128, stdin);
	  sscanf(str, "%d ", &n);
	  j = n;

	  do {
			m += n % 10;
			if (m < j) {
				m *= 10;
			}
			n /= 10;
	  } while (n != 0)

	  if (j == m) {
		  printf("%d Kapikua da\n", j);
	  }
	  else {
		  printf("%d Ez da kapikua\n", j);
	  }

	  printf("Sakatu \"return\" amaitzeko .....");
	  fgets(str, 128, stdin);
	  
	  return 0;
}