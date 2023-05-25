#ifndef BOUTIQUE_H
#define BOUTIQUE_H

// Déclaration de la structure représentant un ordinateur
struct Ordinateur {
    char marque[20];
    int stock;
    float prix;
};

// Déclaration de la fonction pour ajouter un nouvel ordinateur
void ajouterOrdinateur(struct Ordinateur* boutique, int* nbOrdinateurs);

// Déclaration de la fonction pour consulter les détails d'un ordinateur
void consulterDetails(struct Ordinateur* boutique, int nbOrdinateurs);

#endif
