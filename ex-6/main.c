#include <stdio.h>
#include <string.h>

int main() {
    char prenom[50];
    int age;
    char reponse[10];

    
    printf("Bonjour, quel est votre prénom ?\n");
    fgets(prenom, sizeof(prenom), stdin);
   
    prenom[strcspn(prenom, "\n")] = 0;

    printf("Bonjour %s, quel est votre âge ?\n", prenom);
    scanf("%d", &age);

    
    printf("%s, êtes-vous né(e) en fin d'année ? (oui/non)\n", prenom);
    scanf("%s", reponse);

   
    if (strcmp(reponse, "oui") == 0 || strcmp(reponse, "Oui") == 0) {
        printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d\n", prenom, 2023 - age - 1);
    } else {
        printf("%s, sinon votre année de naissance est %d\n", prenom, 2023 - age);
    }

    return(0);
}
