#include <stdio.h>
int main(int argc, char* argv[]){
  
  int n1 = 0;
  char linea[180];
  
  printf("Intruduce un numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n1);
  
  for (int i = 0; i < n1; i++) {

	  for (int a = i; a >= 0; a--) { // a <= i == (n1 - (n1 - i))
		  printf(" ");
	  }
	  for (int a = 0; a <= i; a++) { // a <= i == (n1 - (n1 - i))
		  printf("*");
	  }
	  printf("\n");
  }

  printf("Pulsa Cuanquier tecla para terminar: ");
  fgets(linea, 180, stdin);
}