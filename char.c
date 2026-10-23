#include <stdio.h>
int main() {
char * fruit = "pamplemousse";
printf("Fruit: %s\n", fruit);
printf("Fruit: %13.6s\n", fruit);
printf("Fruit: %s\n", fruit + 6);

//Une chaine de caractère écrite entre "..." est une chaine constante et ne peut pas être modifiée:


// Ceci fait planter le programme
//fruit[0] = 'P';
char texte[1024];
texte[0] = 'S';
texte[1] = 'I';
texte[2] = 'E';
texte[3] = 0;
printf("%s\n", texte);
}