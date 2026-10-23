#include <stdio.h>

int main() {
double calculePrix(int quantite, double prix, double rabais) {
    double rabaisFacteur = 1 - rabais / 100;
    return quantite * prix * rabaisFacteur;
} 

void afficheTotal(double prix) {
    printf("Total: %0.2f\n", prix);
}

double prixtot = calculePrix(7,5,20);

afficheTotal(prixtot);
return 0;
}