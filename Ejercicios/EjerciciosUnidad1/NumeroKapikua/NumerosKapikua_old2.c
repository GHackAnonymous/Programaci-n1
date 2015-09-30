#include <stdio.h>
#include <string.h>
int main() {

	char linea[180];
	int numero = 0, m = 0;
	printf("Introduce un numero entero: ");
	fgets(linea, numero, stdin);
	sscanf(linea,"%d", numero);

	do {
		m += numero % 10;
	} while ();
	
	return 0;
}