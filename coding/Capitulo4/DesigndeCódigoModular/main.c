#include <stdio.h>
#include <math.h>

// Struct para encapsular dados relacionados
struct Ponto {
    int x;
    int y;
};

// Função para calcular a distância entre dois pontos
double distancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Ponto ponto1 = {1, 2};
    struct Ponto ponto2 = {4, 6};

    // Chamando a função distancia para calcular a distância entre os pontos
    double dist = distancia(ponto1, ponto2);
    printf("Distância entre os pontos: %.2f\n", dist);

    return 0;
}