#include <stdio.h>

int main() {
    char nom[50];

    printf("Entrez votre nom : ");
    scanf("%49s", nom);

    printf("Bonjour, %s !\n", nom);
    return 0;
}
