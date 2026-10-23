#include <stdio.h>

int main() {
// il faut définir les type des variables,  en précisants
int quantite = 7;
double prix = quantite * 4.5; // nombre a virgule 
char * produit = "cafe"; 
printf("Produit : %s\n", produit);
    printf("Quantite : %d\n", quantite);
    printf("Prix total : %.2f\n", prix);
    printf("%d %s coutent %f franc \n", quantite, produit, prix);
     printf("%d %s coutent %0.2f franc \n", quantite, produit, prix);
    int heures = 14;
    int minute = 53;
    printf("il est %d:%d. \n", heures, minute);
    printf("il est %02d:%02d. \n", heures, minute);
    return 0;}
// texte str


//Chaque % est remplacé par une valeur. La lettre qui suit détermine le format d'affichage, et dépend du type. Les lettres les plus utilisées sont:

//%d	int
//%f	double
//%s	char * (texte)
//%c	char (caractère unique)