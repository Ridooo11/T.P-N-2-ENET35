#include <stdio.h>
#include <string.h>

int main() {
    char palabras[5][50]; 
    char palabraMasLarga[50]; 
    int i;

    
    printf("Ingresa 5 palabras:\n");
    for (i = 0; i < 5; i++) {
        printf("Palabra %d: ", i + 1);
        scanf("%s", palabras[i]);
    }

    
    strcpy(palabraMasLarga, palabras[0]);

    
    for (i = 1; i < 5; i++) {
        if (strlen(palabras[i]) > strlen(palabraMasLarga)) {
            strcpy(palabraMasLarga, palabras[i]);
        }
    }

    
    printf("La palabra mas larga es: %s\n", palabraMasLarga);
}

