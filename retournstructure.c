#include <stdio.h>
// Déclarer une structure
struct Sommet {
    char * nom;
    double latitude;
    double longitude;
    float altitude;
};
struct Sommet creerSommet(char * nom, float altitude) {
    struct Sommet sommet;
    sommet.nom = nom;
    sommet.latitude = 0;
    sommet.longitude = 0;
    sommet.altitude = altitude;
    return sommet;
}

int main(int argc, char * argv[]) {
    struct Sommet cervin = creerSommet("Matterhorn", 4478);
    struct Sommet weisshorn = creerSommet("Weisshorn", 4506);
    printf("%s, %f", cervin.nom, weisshorn.altitude);
}