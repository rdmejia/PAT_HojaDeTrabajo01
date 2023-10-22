#include "Ejercicio04.h"

void generar(int n, int abierto, int cerra, string actual, vector<string>& resultado)
{
    if (abierto == n && cerra == n)
    {
        resultado.push_back(actual);
        return;
    }

    if (abierto < n) {
        actual.append("(");
        generar(n, abierto + 1, cerra, actual, resultado);
        actual.pop_back();
    }

    if (cerra < abierto) {
        actual.append(")");
        generar(n, abierto, cerra + 1, actual, resultado);
        actual.pop_back();
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> resultado;
    generar(n, 0, 0, "", resultado);
    return resultado;
}
