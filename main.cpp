// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void Voiture(char Marque,char Modele);

int main()
{
    int var1,var2,var3;
    printf("Rentrer une valeur \n");
    scanf_s("%d",&var1);
    printf("Rentrer une 2e valeur \n");
    scanf_s("%d",&var2);
    printf("Rentrer une 3e valeur \n");
    scanf_s("%d", &var3);
    char mot1 = 'Bjr';
    char mot2 = 'Audi';
    char mot3 = 'A2';
    printf("%s", mot2);
    Voiture(mot2, mot3);
}

void Voiture(char Marque, char Modele) {
    printf("%s %s est en train de rouler", Marque, Modele);
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
