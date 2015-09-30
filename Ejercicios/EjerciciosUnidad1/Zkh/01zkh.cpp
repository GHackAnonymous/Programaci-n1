#include <stdio.h> //importo la libreria base de c
#include <stdlib.h>
#include <windows.h>
int main(int argc, char* argv[]) { // Funcion principal
	
	int n = 0, m = 0, tmp = 0;
	char caracter[180];

	printf("Introduce un numero entero: ");
	fgets(caracter, 180, stdin);
	sscanf(caracter, "%d", &n);
	printf("Introduce el segundo numero: ");
	fgets(caracter, 180, stdin);
	sscanf(caracter, "%d", &m);

	do{
		tmp = n / m;
		n = m;
		m = tmp;
	} while (n>m);
	
	printf("Resultado: m= %d , n= %d , tmp= %d \n", m, n, tmp);
	//system("pause");
	/*
	Si el programa llega aqui es que ha acabado bien
	por lo tanto retorno al sistema operativo 0 
	*/
	return 0; 
}