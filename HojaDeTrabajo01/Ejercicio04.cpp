#include "Ejercicio04.h"

vector<string> Ejercicio04::generateParenthesis(int n)
{
    std::vector<std::string> resultado;
    generarParentesisRecursivo(resultado, "", n, n);
    return resultado;
}

void generarParentesisRecursivo(vector<string>& resultado, string actual, int abiertos, int cerrados)
{
    if (abiertos == 0 && cerrados == 0)
    {
        resultado.push_back(actual);
        return;
    }

    if (abiertos > 0)
    {
        generarParentesisRecursivo(resultado, actual + '(', abiertos - 1, cerrados);
    }

    if (cerrados > abiertos)
    {
        generarParentesisRecursivo(resultado, actual + ')', abiertos, cerrados - 1);
    }
}



