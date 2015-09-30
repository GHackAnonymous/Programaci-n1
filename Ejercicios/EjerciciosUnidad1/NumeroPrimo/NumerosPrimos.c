#include <stdio.h>
int main(int argc, char* argv[]) {

	int n1 = 0, i = 1, modulo1 = -1;
	char linea[180];

	printf("Intruduce un numero entero: ");
	fgets(linea, 180, stdin);
	sscanf(linea, "%d", &n1);

	while (i < (n1*2)) {
		modulo1 = n1 % (i+1);

		if (modulo1 != 0) {
			break;
		}else {
			i++;
		}
	}

	if (modulo1 != 0) {
		printf("\nEl es primo");
	}
	else {
		printf("\nEl no es primo");
	}
	

	printf("\nPulsa Cuanquier tecla para terminar: ");
	fgets(linea, 180, stdin);
	return 0;
}