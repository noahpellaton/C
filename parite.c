#include <stdio.h>

int main(){
    int somme = 0;
    for (int i = 0; i<21; i++){
        if (i%2 == 0){
            printf("%d \n", i);
            somme += i;
        }
    }
printf("la somme vaut %d ", somme);
return 0;
}