#include <stdio.h>

int main(int argc, char* argv[]) {

	int tmp = 0, m = 0, n = 0, resultado = 0;
	char linea[180];

	printf("Intruduce el primer numero entero: ");
	fgets(linea, 180, stdin);
	sscanf(linea, "%d", &n);
	printf("Intruduce el segundo numero entero: ");
	fgets(linea, 180, stdin);
	sscanf(linea, "%d", &m);

	if (n < m) {
		tmp = m;
		m = n;
		n = tmp;
	}

	resultado = n;

	while (!(resultado % m)==0) { // si no es divisible
		resultado = resultado + n;
	}

	printf("El resultado es: %d\n", resultado);

	return 0;
}