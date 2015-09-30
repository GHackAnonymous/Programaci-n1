#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]){
	printf("Juego de adivinar numeros creado por eder\n");
	
	srand (time(NULL));

	char linea[180];
	int numeroRandom = -1;
	int numeroUsuario = -1;
	numeroRandom = rand() % 21 + 0;

	do {
		printf("En numero esta entre el (1 to 20): ");
		fgets(linea, 180, stdin);
		sscanf(linea,"%d",&numeroUsuario);
		if (numeroRandom<numeroUsuario) 
			printf("El numero es menor\n");
		else if (numeroRandom>numeroUsuario) 
			printf("El numero es mayor\n");
		else if (numeroRandom=numeroUsuario) 
			printf("Ganador: Has adivinado el munero\n");
	} while (numeroRandom!=numeroUsuario);

	system("pause");

    return 0;
}
