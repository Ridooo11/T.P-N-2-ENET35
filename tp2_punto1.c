#include <stdio.h>
#include <string.h>

int main() {
	const int MAXIMO = 50;
	char nombre[MAXIMO];
	
	printf("Ingrese su nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
	
	printf("Su nombre es: %s", nombre);
}
