#include <stdio.h>
int main(int argc, char* argv[]) {

	int n = 0, i = 0, j = 1; // n es el fib(n)
	char linea [180];

	printf("Intruduce un numero entero: ");
	fgets(linea, 180, stdin);
	sscanf(linea, "%d", &n);

	

	for (int k = 0; k < n; k++){
		printf("%d ",i);

		int t = i + j;
		i = j;
		j = t;
	}

	printf("\nPulsa Cuanquier tecla para terminar: ");
	fgets(linea, 180, stdin);
	return 0;
}