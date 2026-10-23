#include <stdio.h>
// pour utiliser les fonctions mathematique il faut inclure math
#include <math.h>


int main() {
    double a = 10.0;
    double b = a * 2 + 21.32 ;
    double c = b / 1.4;
    printf("j'ai a = %.1f b = %.2f c =%.3f \n", a,b,c);
    int resultat = 20 / 3;
// Résultat: 6
    int reste = 20 % 3;
    int x = 3;
    int y = 2;
    double resultats = (double) x / (double) y;
    printf("on a resultats qui donne %.2f \n",resultats);
// Résultat: 2, car 20 / 3 = 6, avec reste 2
     return  0;
}
// si on melange int e tdouble ca fait un double automatiquement 
    double valeurAbsolue = fabs(nombre);
    double distance = sqrt(x * x + y * y);
    double arrondiVersLeBas = floor(nombre);
    double x = cos(angle);
    double y = sin(angle);
    double circonference = 2 * rayon * M_PI;
quelque fonction mathématique (n'apparaissent pas dans le run )