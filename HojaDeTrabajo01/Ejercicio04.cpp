#include "Ejercicio04.h"

vector<string> Ejercicio04::generateParenthesis(int n, string Ct, int A, int C, arr <string> & resultado)
{
    if ( A == n && C == n)
    {
        resultado.push_back(Ct);
        return; 
    }
    if (A  < n )
    {
        Ct (n, A + 1, C, Ct + resultado);
    }
    if (C < A)
    {
        Ct (n, A, C + 1, C, Ct + resultado);
    }
}

vector<string> generarCombinacionesDeParentesis(int n)
{
    vector<string> resultados;
    generarCombinaciones(n, 0, 0, "", resultados);
    return resultados;
}

int main() {
    int n;
    cout << "Ingrese el número de pares de paréntesis: ";cin >> n;

    vector<string> combinaciones = generarCombinacionesDeParentesis(n);

    cout << "Combinaciones válidas de paréntesis:" << endl;
    for (const string& combinacion : combinaciones) {
        cout << combinacion << endl;
    }

    return 0;
}
