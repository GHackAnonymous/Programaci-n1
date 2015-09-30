#include <stdio.h>
int main(int argc, char* argv[]){
  
  int n1 = 0;
  char linea[180];
  
  printf("Intruduce un numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n1);

  int spacios = (((n1 * 2) - 1) - 1);
  printf("%d\n",spacios);
  int cuantos = spacios / 2;
  printf("%d",cuantos);
  
  for (int i = 0; i < n1; i++) {
	  for (int a = 0; a < n1; a++) {
		 if(a < cuantos){
			printf(" ");
		 }else if(a == cuantos){
			printf("*");
		 }else{
			printf(" ");
		 }
	  }
	  printf("\n");
  }

  printf("Pulsa Cuanquier tecla para terminar: ");
  fgets(linea, 180, stdin);
}