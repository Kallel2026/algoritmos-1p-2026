#include <stdio.h>

int main() {
    const int VELX = 60 , VELY = 90;
    int distancia, tempo;
    scanf("%d", &distancia);
    tempo = distancia / ((VELY - VELX) / 60.0);
    //tempo = distancia / tempo;
    printf("%d minutos\n", tempo);
    return 0;
}