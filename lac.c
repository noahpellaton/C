#include <stdio.h>

int main(){
    double surface = 47690000;
    double niveau_ini = 557.326;
    double aar = 13;
    double kander = 6;
    double volume_eau = surface * niveau_ini; 
    printf("%.6f\n", niveau_ini);
    for (int i=1 ; i<49; i++) {
        double effluent = (niveau_ini -557.05)*(niveau_ini -557.05) *250;
        double changement = aar + kander - effluent;
        double changement_heure = changement * 3600;
        volume_eau = volume_eau + changement_heure;
        niveau_ini = volume_eau/surface;
        printf("%.6f\n", niveau_ini);

    }
    return  0;

}