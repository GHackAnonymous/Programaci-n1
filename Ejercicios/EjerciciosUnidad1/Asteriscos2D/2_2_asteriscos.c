#include <stdio.h>
int main(int argc, char* argv[]){
  
  int n1 = 0;
  char linea[180];
  
  printf("Intruduce un numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n1);
  
  for (int i = 0; i < n1; i++){
    for (int a = 0; a < n1; a++){
      printf("*");
    }
    printf("\n");
  }
  printf("Pulsa Cuanquier tecla para terminal: ");
  fgets(linea, 180, stdin);
}
