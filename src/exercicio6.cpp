#include <iostream>
using namespace std;

void intercala(int *vet1, int tam1, int *vet2, int tam2, int *resultado) {
    for (int i = 0; i < tam1; i++) {
        resultado[i] = vet1[i];
    }
    for (int i = 0; i < tam2; i++) {
        resultado[tam1 + i] = vet2[i];
    }
}

int main(void) {
    const int tam1 = 5;
    const int tam2 = 4;
    int vetor1[tam1] = {1, 2, 3, 4, 5};
    int vetor2[tam2] = {7, 8, 9, 10};
    const int tam3 = tam1 + tam2;
    int vetor3[tam3];
    intercala(vetor1, tam1, vetor2, tam2, vetor3);

    for (int i = 0; i < tam3; i++) {
        cout << vetor3[i] << " ";
    }

    return 0;
}
