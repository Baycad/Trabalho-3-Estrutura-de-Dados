#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int distancia;
} Cidade;

typedef struct Node {
    Cidade cidade;
    struct Node* prox;
} Estrada;

Estrada* getEstrada(const char* nomeArquivo) {

}

double calcularMenorVizinhanca(const char* nomeArquivo) {

}

char* cidadeMenorVizinhanca(const char* nomeArquivo) {

}

int main() {
    const char* nomeArquivo = "dados.txt";

    Estrada* estrada = getEstrada(nomeArquivo);
    double menorVizinhanca = calcularMenorVizinhanca(nomeArquivo);
    char* cidadeMenor = cidadeMenorVizinhanca(nomeArquivo);

    printf("Menor vizinhança: %.2lf\n", menorVizinhanca);
    printf("Cidade com menor vizinhança: %s\n", cidadeMenor);

    return 0;
}