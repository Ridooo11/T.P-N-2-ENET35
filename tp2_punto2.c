#include <stdio.h>
#include <string.h>

int main() {
    char cadena[50];
    const int CANT_VOCALES = 5;
    char vocales[5] = { 'a', 'e', 'i', 'o', 'u' };
    
    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    
    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    int i, j;
    int encontrado = 0;

    for (i = 0; i < strlen(cadena); i++) {    
        for (j = 0; j < CANT_VOCALES; j++) {
            if (cadena[i] == vocales[j]) {
                printf("Se encontro la vocal %c en la cadena\n", cadena[i]);
                encontrado = 1;
                break;
            }
        }
    }

    if (!encontrado) {
        printf("No se ha encontrado ninguna vocal en la cadena: %s\n", cadena);
    }
}
