#include "Ejercicio04.h"

void generate(int n, int abierto, int cerra, string actual, vector<string>& resultado) {
    if (abierto == n && cerra == n)
    {
        resultado.push_back(actual);
        return;
    }

    if (abierto < n) {
        actual.append("(");
        generate(n, abierto + 1, cerra, actual, resultado);
        actual.pop_back();
    }

    if (cerra < abierto) {
        actual.append(")");
        generate(n, abierto, cerra + 1, actual, resultado);
        actual.pop_back();
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> r;
    generate(n, 0, 0, "", r);
    return r;
}
