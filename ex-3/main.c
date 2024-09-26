#include <stdlib.h>
#include <stdio.h>

int main() {
    char operation;


    printf("Veuillez entrer un signe d'opération (+, -, /, , %%): ");
    scanf(" %c", &operation);

 
    if (operation == '+') {
        printf("L'opération est une addition.\n");
    } else if (operation == '-') {
        printf("L'opération est une soustraction.\n");
    } else if (operation == '*') {
        printf("L'opération est une multiplication.\n");
    } else if (operation == '/') {
        printf("L'opération est une division.\n");
    } else if (operation == '%') {
        printf("L'opération est un module.\n");
    } else {
        printf("L'opération n'existe pas.\n");
    }


    return 0;
}