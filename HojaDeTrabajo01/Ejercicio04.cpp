#include "Ejercicio04.h"

void parentesisRecur(vector<string& resultado, string actual, int abiertos, int cerrados)
{
    if (abiertos == 0 && cerrados == 0)
    {
        resultado.push_back(actual);
        return;
    }

    if (abiertos > 0)
    {
        parentesisRecur(resultado, actual + '(', abiertos - 1, cerrados);
    }

    if (cerrados > abiertos)
    {
        parentesisRecur(resultado, actual + ')', abiertos, cerrados - 1);
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> resultado;
    parentesisRecur(resultado, "", n, n);
    return resultado;
}



