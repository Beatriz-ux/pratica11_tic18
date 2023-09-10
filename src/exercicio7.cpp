#include <iostream>
using namespace std;
void multiplica_por_n(int *vet, int qtde, int n)
{
    for (int i = 0; i < qtde; i++)
    {
        vet[i] *= n;
    }
}
int main(void)
{
    int vetor[5] = {1, 2, 3, 4, 5};
    multiplica_por_n(vetor, 5, 2);
    for (int i = 0; i < 5; i++)
    {
        cout << vetor[i] << " ";
    }
    return 0;
}