#include <iostream>
using namespace std;
void calcula(int &x, int &y){
    int aux;
    aux = x;
    x = x + y;
    y = aux - y;
}
int main(void){
    int x, y;
    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;
    calcula(x, y);
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    
    return 0;
}