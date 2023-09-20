#include <iostream>
using namespace std;
int verifica(char* texto,char letra, int* vetor){
    
    int cont=0;
    int i=0;
    while(texto[i] != '\0'){
        if(texto[i]==letra){
            vetor[i]=1;
            cont++;
        }
        i++;
    }
    return cont;
}
int main() {
    char texto[10];
    char letra='a';
    int vetor[10]={0},contador;
    cout <<"Digite uma palavra: "<<endl;
    cin >>texto;
    cout <<"Digite uma letra: "<<endl;
    cin >>letra;
    
    contador=verifica(texto,letra,vetor);
    for(int i=0; i<(strlen(texto));i++){
        if(vetor[i]==1){
            cout << "Letra encontrada na posição: ["<<i+1<<"]" <<endl;
        }
    }
    cout <<"Total de letras ("<<letra<<"): "<<contador;
    return 0;
}
