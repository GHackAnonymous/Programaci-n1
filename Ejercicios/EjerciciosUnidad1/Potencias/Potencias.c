#include <stdio.h>
int main(int argc, char* argv[]) {

	int n1 = 0, n2 = 0, i = 0, resultado = 1;
	char linea[180];

	printf("Intruduce el primer numero entero: ");
	fgets(linea, 180, stdin);
	sscanf(linea, "%d", &n1);

	printf("Intruduce el segundo numero entero: ");
	fgets(linea, 180, stdin);
	sscanf(linea, "%d", &n2);


	while (i < n2) {
		resultado = resultado * n1;
		i++;
	}

	printf("\nEl resultado de %d elevado a %d es: %d",n1,n2,resultado);

	printf("\nPulsa Cuanquier tecla para terminar: ");
	fgets(linea, 180, stdin);
	return 0;
}