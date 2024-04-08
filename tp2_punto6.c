#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100], cadena2[100];
    int contador[256] = {0};
    int i;

    printf("Ingresa la primera cadena: ");
    scanf("%s", cadena1);

    printf("Ingresa la segunda cadena: ");
    scanf("%s", cadena2);

   
    if (strlen(cadena1) != strlen(cadena2)) {
        printf("Las cadenas no son anagramas\n");
    } else {
        
        for (i = 0; cadena1[i] && cadena2[i]; i++) {
            contador[cadena1[i]]++;
            contador[cadena2[i]]--;
        }

        
        for (i = 0; i < 256; i++) {
            if (contador[i] != 0) {
                printf("Las cadenas no son anagramas\n");
                return 0;
            }
        }

        printf("Las cadenas son anagramas\n");
    }

}
