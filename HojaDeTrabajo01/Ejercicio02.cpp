#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{
    int p = 0;
    int p2 = s.length() - 1;

    while (p < p2)
    {
        if (s[p] != s[p2])
        {
            // Los caracteres no coinciden, no es un palíndromo
            return false;
        }
        p++;
        p2--;
    }

    // Si llegamos aquí, todos los caracteres coinciden, es un palíndromo
    return true;
}
