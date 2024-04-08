#include <stdio.h>
#include <string.h>

int main() {
    char cadena[50];
    char cadenaInvertida[50];

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    int longitud = strlen(cadena);
    int palindromo = 0;

    
    if (cadena[longitud - 1] == '\n') {
        cadena[longitud - 1] = '\0';
    }

    int i, j;
    for (i = 0, j = longitud - 2; i < longitud; i++, j--) {
        cadenaInvertida[j] = cadena[i];
    }

    cadenaInvertida[longitud] = '\0';

    palindromo = strcmp(cadena, cadenaInvertida);
    
    if (!palindromo) {
    	printf("La cadena de texto '%s' es palindroma", cadena);
	} else {
		printf("La cadena de texto '%s' no es palindroma", cadena);
	}

}
