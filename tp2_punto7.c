#include <stdio.h>
#include <string.h>



int main() {
	
	int i, j, l, k;
	
	const int MAX_CADENAS = 5;
	const int MAX_LONGITUD = 100;
	
	
    char cadenas[MAX_CADENAS][MAX_LONGITUD];
    char subcadena_mas_larga[MAX_LONGITUD];
    subcadena_mas_larga[0] = '\0'; // se inicializa el string vacio. No se puede hacer en la delcaracion.
    int frecuencia_mas_larga = 0;

   
    printf("Ingrese las cinco cadenas de texto:\n");
    for (i = 0; i < 5; i++) {
        fgets(cadenas[i], sizeof(cadenas[i]), stdin);
        cadenas[i][strcspn(cadenas[i], "\n")] = '\0'; // se borra el salto de linea
        
    }

   
    for (i = 0; i < MAX_CADENAS; i++) { // se recorren las cadenas
        int longitud = strlen(cadenas[i]);
        for (j = 0; j < longitud; j++) { // se recorren los caracteres de las cadenas
            for (k = j + 2; k <= longitud; k++) { // se buscan las subcadenas de al menos 2 de longitud, por eso k = j + 2
                char subcadena[100];
                strncpy(subcadena, cadenas[i] + j, k - j); // k -j indica la longitud de la subcadena //  cadenas[i] + j indica el punto de inicio donde se empieza a copiar la sub cadena
                subcadena[k - j] = '\0';					// agrega un caracter nulo para terminar la subcadena
                int frecuencia = 0;
                for (l = 0; l < 5; l++) {
                    if (strstr(cadenas[l], subcadena) != NULL) { // se busca la ocurrencia de la subcadena en las cadenas originales
                        frecuencia++; // si existe se aumenta la frecuencia con la que la subcadena aparece
                    }
                }
                if (frecuencia > 1 && strlen(subcadena) > strlen(subcadena_mas_larga)) { // se verifica que la subcadena este en mas de una cadena y si la longitud de esa sub cadena es mayor a la subcadena mas larga, se actualiza la frecuencia y la subcadena   														
                    strcpy(subcadena_mas_larga, subcadena);
                    frecuencia_mas_larga = frecuencia;
                }
            }
        }
    }

    
    printf("La subcadena mas larga repetida es: %s\n", subcadena_mas_larga);
}

