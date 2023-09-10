#include <iostream>
using namespace std;
int* intercala(int *vet1, int tam1, int *vet2, int tam2){
    int vet3[9];
    for (int i=0;i<tam1;i++){
        vet3[i] = vet1[i];
    }
    for (int i=0;i<tam2;i++){
        vet3[tam1+i] = vet2[i];
    }
    return (int *)vet3;
}
int main(void){
    int vetor1[5] = {1,2,3,4,5};
    int vetor2[4] = {7,8,9,10};
    int *vetor3;
    vetor3 = intercala(vetor1, 5, vetor2, 4);
    for(int i=0;i<9;i++){
        cout << vetor3[i] << " ";
    }

    return 0;
}