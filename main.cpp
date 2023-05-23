// ConsoleApplication1.cpp : This file contains the 'main' function. The execution of the program starts and ends here.
//

#include <stdio.h>

void Voiture(const char* Marque, const char* Modele);

int main()
{
    int var1, var2, var3;
    printf("Input first value: \n");
    
    scanf("%d", &var1); // input value
    
    printf("Input second value: \n");
    scanf("%d", &var2);
    
    printf("Input third value: \n");
    scanf("%d", &var3);
    
    const char* mot1 = "Hello";
    
    const char* mot2 = "Volkswagen";
    
    const char* mot3 = "Golf7";
    
    printf("%s", mot2);
    Voiture(mot2, mot3);
    return 0;
}

void Voiture(const char* Marque, const char* Modele)
{
    printf("%s %s is now running", Marque, Modele);
}

// Run the program: Ctrl+F5 or Debug menu > Run without debugging
// Debug the program: F5 or Debug menu > Start debugging

// Tips for a good start :
// 1- Use the Solution Explorer window to add files and manage them.
// 2- Use the Team Explorer window to connect to source code control.
// 3- Use the Output window to see the generation output and other messages.
// 4- Use the Error List window to see the errors.
// 5- Go to Project > Add New Item to create code files, or Project > Add Existing Item to add existing code files to the project.
// 6- To reopen this project later, go to File > Open > Project and select the .sln file.
