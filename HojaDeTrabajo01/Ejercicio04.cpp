#include "Ejercicio04.h"

void generarParentesis(string s, int inicio, int final, int n, vector<string> &resultado) {
    if (inicio == n && final == n) 
    {
        resultado.push_back(s);
        return;
    }
    if (inicio > final) {
        generarParentesis(s + ')', inicio, final + 1, n, resultado);
    }
    if (inicio < n) {
        generarParentesis(s + '(', inicio + 1, final, n, resultado);
    }
}

vector<string> Ejercicio04::generarParentesis(int n)
{
    vector<string> resultado;
    generarParentesis("", 0, 0, n, resultado);
    return resultado;
}
