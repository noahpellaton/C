#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));
    int entier1 = (int) (rand() % 6) + 1;
    int entier2 =(int) (rand() % 6) + 1;
    printf("entier valent : %d, %d \n", entier1, entier2);
    if (entier1 == 6 && entier2 == 6 ){
        printf("C'EST GAGNE");
    } else if ( entier1 == entier2){
        printf("PAS MAL");
    } else{
        printf("GENANt T'es nul");
    }
    

}
