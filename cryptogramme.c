#include <stdio.h>

int main(){
    char tableau[57];
    char  texte[] = "T-LS-AOS--EEOIOAAUENTUOLUILRPDSA-S.LUNV-ENEGT-T-E-NLLSBE";
    int nombre = 0;
    for (int i=0; i<57; i++){
        tableau[i] = '*';
    }
    for (int i=0; i<56; i++){
        int avancer = 17;
        while (avancer>0){
            nombre += 1;
            if(nombre == 56) nombre = 0;
            if(tableau[nombre] == '*') avancer-=1;
        }
        char c = texte[i];
        tableau[nombre] = c;
    }
    tableau[56] = 0;
    printf("Message : %s", tableau);

}