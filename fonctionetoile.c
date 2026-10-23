#include <stdio.h>
#include <math.h>


double etoile(int k_max, int k) {
    for (int k =0; k < k_max; k++) {
    double x =  100* cos(2*M_PI*k/k_max);
    double y =  100 * sin(2*M_PI*k/k_max);   
    printf(" %f , %f  ", x,y );
    }
}
