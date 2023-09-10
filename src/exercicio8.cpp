#include <iostream>
using namespace std;
int conta_primos(int *vet, int qtde)
{
    int cont = 0;
    for (int i = 0; i < qtde; i++)
    {
        bool primo = true;
        if (vet[i] == 1)
        {
            primo = false;
        }
        else
        {
            for (int j = 2; j <= (vet[i] / 2); j++)
            {
                if (vet[i] % j == 0)
                {
                    primo = 0;
                    break;
                }
            }
            if (primo)
            {
                cont++;
            }
        }
    }
    return cont;
}
int main(void)
{
    int vetor[9] = {1,3,3,5,7,11,1,20,10};
    cout << conta_primos(vetor, 9) << endl;
    return 0;
}