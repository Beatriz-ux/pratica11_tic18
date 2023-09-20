#include <iostream>
#include <algorithm>
using namespace std;
string iguais(string A, string B)
{
    string C;
    bool igual = false;
    C = A;
    cout << "A: " << C << endl;
    for (int i = 0; i < C.length(); i++)
    {
        igual = false;
        for (int j = 0; j < B.length(); j++)
        {
            if (C.at(i) == B.at(j))
            {
                igual = true;
                break;
            }
            else
            {
                igual = false;
            }
        }
        if (!igual)
            C.at(i) = ' ';
    }
    // remover espacos da string c
    C.erase(remove_if(C.begin(), C.end(), ::isspace), C.end());
    for (int i = 0; i < C.length(); i++)
    {
        for(int j = i+1; j < C.length(); j++){
            if(C.at(i) == C.at(j)){
                C.erase(j, 1);
                break;
            }
        }
        
    }
    return C;
}
int main(void)
{
    string A, B, C;
    cout << "Digite a primeira palavra: ";
    getline(cin, A);
    cout << "Digite a segunda palavra: ";
    getline(cin, B);
    C = iguais(A, B);
    cout << "Letras iguais: " << C << endl;
    return 0;
}