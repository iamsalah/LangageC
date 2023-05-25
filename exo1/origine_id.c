#include <stdio.h>
#include <string.h>

struct Person {
    char origin[20];
};

void displayOrigin(const struct Person* person) {
    printf("Origine: %s\n", person->origin);
}

int main() {
    struct Person person;
    char choice;

    printf("Entrez la première lettre de l'origine ethnique (A pour africain, S pour asiatique, E pour européen) : ");
    scanf("%c", &choice);

    switch (choice) {
        case 'A':
        case 'a':
            strcpy(person.origin, "Africain");
            break;
        case 'S':
        case 's':
            strcpy(person.origin, "Asiatique");
            break;
        case 'E':
        case 'e':
            strcpy(person.origin, "Européen");
            break;
        default:
            strcpy(person.origin, "Non reconnu");
            break;
    }

    displayOrigin(&person);

    return 0;
}