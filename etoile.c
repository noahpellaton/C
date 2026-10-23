#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double etoile(int k_max, int r1, int r2, int j) {
     for (int k =0; k < k_max; k++) {
        j += 1;
    if (j % 2 == 0) {
        double x =  r1* cos(2*M_PI*k/k_max );
        double y =  r1 * sin(2*M_PI*k/k_max);   
        printf(" %f , %f \n ", x,y );
    }
    else {
        double x =  r2* cos(2*M_PI*k/k_max );
        double y =  r2 * sin(2*M_PI*k/k_max);   
        printf(" %f , %f \n ", x,y );
    }
}
}

int main() {
    int nb_de_branche = 14;
    int kmax = 2*nb_de_branche;
    int r1 = 50;
    int r2 = 100;
    int i = 0;
    double points = etoile(kmax,r1,r2,i);
    return 0;
}