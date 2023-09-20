#include <iostream>
#include <vector>
using namespace std;
int max (int*, int);
int min (int*, int);
void maxmin(int vetor[], int n, int &maximo, int &minimo){
    maximo = max(vetor, n);
    minimo = min(vetor, n);

};
int max (int vetor[], int n){
    int maximo = vetor[0];
    for (int i = 0; i < n; i++){
        if (vetor[i] > maximo){
            maximo = vetor[i];
        }
    }
    return maximo;

};
int min (int vetor[], int n){
    int minimo = vetor[0];
    for (int i = 0; i < n; i++){
        if (vetor[i] < minimo){
            minimo = vetor[i];
        }
    }
    return minimo;

};


int main(void){
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maximo, minimo;
    maxmin(vetor, 9,maximo, minimo);
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    return 0;
}