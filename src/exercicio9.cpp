#include <iostream>
using namespace std;
 float calc_serie(int N){
    float soma = 0;
    for (int i=1;i<=N;i++){
        soma += (float)i/(N-(i-1));
    }
    return soma;
 }
int main(void){
    cout << calc_serie(3) << endl;
    return 0;
}