#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double nombres[10];
    srand(time(NULL));  
    for (int i =0; i<10; i++){   
        double randomDomaine = RAND_MAX + 1.0;
        double nb = rand()/randomDomaine*10;
        nombres[i] = nb; 

        printf("nombre %d, %.2f",i, nombres[i] );
    }

}