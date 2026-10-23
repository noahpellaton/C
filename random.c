#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char * argv[]) {
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL)); 
    double randomDomaine = RAND_MAX + 1.0;

    // Double
    double nombre = rand() / randomDomaine * 10;
    printf("Nombre dans l'intervalle [0, 10[: %f\n", nombre);

    // Int
    int entier = (int) (rand() / randomDomaine * 100);
    printf("Entier entre 0 et 99 (y compris): %d\n", entier);

    return 0;
}