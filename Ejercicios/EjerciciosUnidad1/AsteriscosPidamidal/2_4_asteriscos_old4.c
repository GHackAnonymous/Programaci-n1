#include <stdio.h>
int main(int argc, char* argv[]){
  
  int n1 = 0;
  char linea[180];
  
  printf("Intruduce un numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n1);
  
  int spacios = ((n1 * 2) - 2);
  int cuantos = spacios;

  for (int i = 0; i < n1; i++) {
	  
	  cuantos = cuantos / 2;

	  for (int t = 0; t < cuantos; t++) {
		  printf(" ");
	  }
	  for (int a = 0; a <= (i*2); a++) {
		  printf("*");
	  }
	  printf("\n");
  }

  printf("Pulsa Cuanquier tecla para terminar: ");
  fgets(linea, 180, stdin);
}