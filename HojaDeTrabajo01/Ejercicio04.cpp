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
