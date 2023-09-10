#include <iostream>

using namespace std;
string codificar(string palavra)
{
    for (int i = 0; i < palavra.length(); i++)
    {

        if (palavra.at(i) == 'z')
        {
            palavra.at(i) = 'a';
        }
        else if (palavra.at(i) == 'Z')
        {
            palavra.at(i) = 'A';
        }
        else if (palavra.at(i) == ' ')
        {
            continue;
        }
        else
        {
            palavra.at(i) = palavra.at(i) + 1;
        }
    }
    return palavra;
}
string decodificar(string palavra)
{
    for (int i = 0; i < palavra.length(); i++)
    {

        if (palavra.at(i) == 'a')
        {
            palavra.at(i) = 'z';
        }
        else if (palavra.at(i) == 'A')
        {
            palavra.at(i) = 'Z';
        }
        else if (palavra.at(i) == ' ')
        {
            continue;
        }
        else
        {
            palavra.at(i) = palavra.at(i) - 1;
        }
    }
    return palavra;
}
int main(void)
{
    string palavra("Estruturas de Dados"), codificada, decodificada;
    cout << "Digite uma palavra: ";
    getline(cin, palavra);
    codificada = codificar(palavra);
    decodificada = decodificar(codificada);
    cout << palavra << endl;
    cout << codificada << endl;
    cout << decodificada << endl;

    return 0;
}