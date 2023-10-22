#include "Ejercicio04.h"

void parentesisRecur(vector<string>& resultado, string actual, int abiertos, int cerrados, int n)
{
    if (abiertos == n && cerrados == n)
    {
        resultado.push_back(actual);
        return;
    }

    if (abiertos > n)
    {
        parentesisRecur(actual + '(', abiertos, cerrados + 1, actual, resultado);
    }

    if (cerrados < abiertos)
    {
        parentesisRecur(actual + ')', abiertos + 1, cerrados, actual, resultado);
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> resultado;
    parentesisRecur( n, 0, 0, "", resultado);
    return resultado;
}
