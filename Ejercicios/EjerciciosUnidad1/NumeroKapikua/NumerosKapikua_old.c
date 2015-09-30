#include <stdio.h>
#include <string.h>
int main() {

	char linea[180];
	int letraInt = 0;
	char letra;
	int resultado = 0;

	printf("Introduce un numero entero: ");
	scanf("%s", linea);

	for (int i = 0; i <= 180; i++) {
		letraInt = linea[i];
		letra = letraInt;
	}
	
	return 0;
}