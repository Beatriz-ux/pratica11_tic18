#include <iostream>
using namespace std;
int insere_meio( int *vetor, int qtde, int elemento){
    for(int i=qtde+1;i>(qtde/2);i--){
       vetor[i] = vetor[i-1];
    }
    vetor[qtde/2] = elemento;
    return qtde+1;
}
int main(void){
    int vetor[10] = {1,2,3,4,5,6};
    int qtd;
    qtd = insere_meio(vetor, 6, 10);
    for(int i=0;i<qtd;i++){
        cout << vetor[i] << " ";
    }   
    return 0;
}