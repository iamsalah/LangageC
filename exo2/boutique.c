#include <stdio.h>
#include "boutique.h"

// Définition de la fonction pour ajouter un nouvel ordinateur
void ajouterOrdinateur(struct Ordinateur* boutique, int* nbOrdinateurs) {
    if (*nbOrdinateurs < 100) {
        struct Ordinateur nouvelOrdinateur;

        printf("Marque : ");
        scanf("%s", nouvelOrdinateur.marque);
        printf("Stock : ");
        scanf("%d", &nouvelOrdinateur.stock);
        printf("Prix : ");
        scanf("%f", &nouvelOrdinateur.prix);

        boutique[*nbOrdinateurs] = nouvelOrdinateur;
        (*nbOrdinateurs)++;

        printf("Nouvel ordinateur ajouté avec succès.\n");
    } else {
        printf("La boutique a atteint sa capacité maximale.\n");
    }
}

// Définition de la fonction pour consulter les détails d'un ordinateur
void consulterDetails(struct Ordinateur* boutique, int nbOrdinateurs) {
    int choix;

    printf("Choisissez un ordinateur (1-%d) : ", nbOrdinateurs);
    scanf("%d", &choix);

    if (choix >= 1 && choix <= nbOrdinateurs) {
        struct Ordinateur ordinateur = boutique[choix - 1];
        printf("Marque : %s\n", ordinateur.marque);
        printf("Stock : %d\n", ordinateur.stock);
        printf("Prix : %.2f\n", ordinateur.prix);
    } else {
        printf("Ordinateur invalide.\n");
    }
}
