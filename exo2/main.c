#include <stdio.h>
#include "boutique.h"

int main() {
    struct Ordinateur boutique[100];
    int nbOrdinateurs = 0;
    int choix;

    do {
        printf("\n--- Gestion de la boutique d'informatique ---\n");
        printf("1. Ajouter un nouvel ordinateur\n");
        printf("2. Consulter les détails d'un ordinateur\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterOrdinateur(boutique, &nbOrdinateurs);
                break;
            case 2:
                consulterDetails(boutique, nbOrdinateurs);
                break;
            case 3:
                printf("Merci d'avoir utilisé notre application. Au revoir !");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    } while (choix != 3);

    return 0;
}
