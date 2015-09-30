#include <stdio.h>
int main(int argc, char* argv[]){
  
  int n1 = 0;
  char linea[180];
  
  printf("Intruduce un numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n1);
 

  for (int i = 1; i <= n1; i++) {

	  for (int t = 0; t < (n1-i); t++) {
		  printf(" ");
	  }
	  for (int a = 0; a < (2*i-1); a++) {
		  printf("*");
	  }
	  printf("\n");
  }

  printf("Pulsa Cuanquier tecla para terminar: ");
  fgets(linea, 180, stdin);
}