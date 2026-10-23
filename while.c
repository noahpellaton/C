#include <stdio.h>

int main(){
    int nombre = 50;
while (nombre > 1) {
    nombre = nombre / 2; 
    if (nombre % 2 == 0) continue;
    if (nombre%5 == 0) break;// arrondi vers le bas
    printf("%d\n", nombre);
}
}