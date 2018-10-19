//Fermín Narváez Reyes A01411229
#include <stdio.h> // Biblioteca
#include <string.h> // Biblioteca

char Mode(char string[]) {
    char mode = string[0]; // Declaración de variables
    int count = 0; // Declaración de variables
    int counttemp; // Declaración de variables

    //PROCESO
    for (int i = 0; i < strlen(string); i++) {
        counttemp = 0;
        for (int j = i + 1; j < strlen(string); j++) {
            if (string[i] == string[j] && string[i] != ' ') {
                counttemp++;
            }
        }
        if (counttemp > count) {
            count = counttemp;
            mode = string[i];
        }
    }
    return mode;
}

int main() {
    char string[150]; // Tamaño del string

    printf("Escribe aquí: "); // Output para recibir un información
    fgets(string, sizeof(string), stdin); // Lo que se recibe

    printf("Lo que más se repite es: %c", Mode(string)); // Respuesta

    return 0; // FIN
}