#include <stdio.h>
#include <string.h>

int main() {
	char cadena[100];
	char caracter, caracterNuevo;
	int i;
	int caracterExiste = 0;
	
	
	
	printf("Ingrese una cadena de texto: ");
	fgets(cadena, sizeof(cadena), stdin);
	
	int longitud = strlen(cadena);
	
	do {
		printf("Ingrese el caracter que desea reemplazar: ");
		scanf(" %c", &caracter);
	
    
    for (i = 0; i < longitud; i++) {
    	if (cadena[i] == caracter) {
    		caracterExiste = 1;
    		break;
		}
	}
	
	if (!caracterExiste) {
		printf("\nEl caracter que desea reemplazar no existe en el string.\n\n");
	}
	
	} while(caracterExiste == 0);

	
	if (caracterExiste) {
		
		printf("Ingrese el nuevo caracter: ");
		scanf(" %c", &caracterNuevo);

	
		if (cadena[longitud - 1] == '\n') {
        	cadena[longitud - 1] = '\0';
    	}
    
    
    	for (i = 0; i < longitud; i++) {
    		if (cadena[i] == caracter) {
    			cadena[i] = caracterNuevo;
			}
		}
	
		printf("\nAsi quedo el string luego del reemplazo: %s", cadena);
	}


}
