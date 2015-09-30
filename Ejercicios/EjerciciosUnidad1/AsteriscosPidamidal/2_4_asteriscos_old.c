#include <stdio.h>
int main(int argc, char* argv[]){
  
  int n1 = 0;
  char linea[180];
  
  printf("Intruduce un numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n1);

  int spacios = (((n1 * 2) - 1) - 1);
  int cuantos = spacios / 2;
  
  for (int i = 0; i < n1; i++) {
	  for (int a = -1; a <= (2*i-1); a++) {
		 
		  //printf("Espacio: %d\n",spacios);
		 if(a < (cuantos + 1)){
			//for (int p = 0; p < cuantos; p++) {
				printf(" ");
			//}
		 }else if(a == (cuantos+1)){
			 printf("*");
		 }else{
			 printf(" ");
		 }
		 

		 //for (int p = 0; p < cuantos; p++) {
			// printf(" ");
		 //}
		  
	  }
	  printf("\n");
  }

  printf("Pulsa Cuanquier tecla para terminal: ");
  fgets(linea, 180, stdin);
}
// hacer 4 y 5