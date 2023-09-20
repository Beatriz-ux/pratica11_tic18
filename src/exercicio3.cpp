#include <iostream>
using namespace std;
void ordena (float &n1,float &n2,float &n3, float &n4){
    float aux;
    bool trocou = false;
    do{
        trocou = false;
        if (n1 > n2){
            aux = n1;
            n1 = n2;
            n2 = aux;
            trocou = true;
        }
        if (n2 > n3){
            aux = n2;
            n2 = n3;
            n3 = aux;
            trocou = true;
        }
        if (n3 > n4){
            aux = n3;
            n3 = n4;
            n4 = aux;
            trocou = true;
        }
    }while(trocou);

}
int main (void){
    float n1, n2, n3, n4;
    cout << "Digite 4 numeros: " << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    ordena(n1, n2, n3, n4);
    cout << "Numeros ordenados: " << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    
    return 0;
}
    
