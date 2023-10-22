#include "Ejercicio04.h"

void generar(string actual, int inicio, int final, int n, vector<string>& resultado)
{
    if (inicio == n && final == n) 
    {
        resultado.push_back(actual);
        return;
    }
    if (inicio > final)
    {
        generar(actual + ')', inicio, final + 1, n, resultado);
    }
    if (inicio < n) 
    {
        generar(actual + '(', inicio + 1, final, n, resultado);
    }
}

vector<string> Ejercicio04::generarParentesis(int n)
{
    vector<string> resultado;
    generarParentesis("", 0, 0, n, resultado);
    return resultado;
}
