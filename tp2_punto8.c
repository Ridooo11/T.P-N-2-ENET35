#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int opcion;
    int i;
    
    printf("Ingrese una oracion: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    do {
        printf("\nEliga que hacer con la oracion.\n\n");
        printf("1. Mostrar la oracion toda en mayuscula\n\n");
        printf("2. Mostrar la oracion todo en minusculas\n\n");
        printf("3. Mostrar la oracion alternando una mayuscula y una minuscula\n\n");
        printf("4. Mostrar la oracion comenzando todas las palabras con mayuscula\n\n");
        printf("5. Salir del programa\n\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1: 
                for (i = 0; i < strlen(cadena); i++) {
                    cadena[i] = toupper(cadena[i]);
                }
                printf("\nLa cadena quedo asi: %s\n", cadena);
                break;
            case 2:
                for (i = 0; i < strlen(cadena); i++) {
                    cadena[i] = tolower(cadena[i]);
                }
                printf("\nLa cadena quedo asi: %s\n", cadena);
                break;
            case 3:
                for (i = 0; i < strlen(cadena); i++) {
                    if (i % 2 == 0) {
                        cadena[i] = toupper(cadena[i]);
                    } else {
                        cadena[i] = tolower(cadena[i]);
                    }
                }
                printf("\nLa cadena quedo asi: %s\n", cadena);
                break;
            case 4:
                for (i = 0; i < strlen(cadena); i++) {
                    if (i == 0 || cadena[i - 1] == ' ') {
                        cadena[i] = toupper(cadena[i]);
                    } else {
                        cadena[i] = tolower(cadena[i]);
                    }
                }
                printf("\nLa cadena quedo asi: %s\n", cadena);
                break;
            case 5:
                printf("\nSaliendo del programa...");
                break;
            default:
                printf("\nOpcion invalida. Intente nuevamente.\n");
                break;
        }
    } while(opcion != 5);
}

