#include <stdio.h>
struct Sommet {
    char * nom;
    double latitude;
    double longitude;
    float altitude;
};
void corrigerAltitude(struct Sommet * sommet) {
    // Convertir feet en mètres
    sommet->altitude = sommet->altitude / 0.3048;
}
// Déclarer une structure

int main(int argc, char * argv[]) {
    // Créer une variable et remplir les champs
    struct Sommet cervin; // a la place de double on dit struct sommet
    cervin.nom = "Matterhorn";
    cervin.latitude = 45.97639;
    cervin.longitude = 7.65833; // comme une class
    cervin.altitude = 4478;

    // ou créer et remplir en même temps
    struct Sommet montBlanc = {"Mont Blanc", 45.832778, 6.865, 4808};

    // Afficher
    printf("%s: %0.0f m alt.\n", cervin.nom, cervin.altitude);
    printf("%s: %0.0f m alt.\n", montBlanc.nom, montBlanc.altitude);
struct Sommet sommets[2];
sommets[0].nom = "Matterhorn";
sommets[0].latitude = 45.97639;
sommets[0].longitude = 7.65833;
sommets[0].altitude = 4478;

sommets[1].nom = "Weisshorn";
sommets[1].latitude = 46.101667;
sommets[1].longitude = 7.716111;
sommets[1].altitude = 4506;
printf("%s ", sommets[0].nom);
printf("at^ltutude = %f\n" ,cervin.altitude);
corrigerAltitude(cervin); 
printf("at^ltutude = %f" ,cervin.altitude);
// pour modifier une structure dans une fonction,
//on utilise un pounteur sommet -> altitude = sommet -> altitude / 0.5;

}