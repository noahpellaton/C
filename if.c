#include <stdio.h>
int main() {
    int quantite = 1233;
    double rabais = 0.0;
if (quantite == 0) {
    printf("Votre panier est vide.\n");
    return 0;
} else if (quantite > 200) {
    rabais = 10.0;
} else {
    rabais = 0.0;
}
printf("%f %% \n ", rabais);
int x = 5;
// si il y a une seule quondition on peut écrire 
//if (quantite == 0) return 0;
// PLUSIEUR CONDITION: && (et) || (ou), ! (négation)
if (quantite > 1000 && x >2 ){
    printf("1000 aine atteinte gg");
    double rabais = quantite >= 100 ? 10.0 : 0.0;
    //si vrai avant le ? premiere condition, sinon deuxieme 
    printf(" ddddd %f", rabais);
}
}