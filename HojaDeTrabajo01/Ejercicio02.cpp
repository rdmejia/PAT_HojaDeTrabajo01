#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{
    int a = 0;
    int b = l.length() - 1;

    int con = 0;
    for (int i = 0; i < l.length();i++)
    {
        for (int x = 0;x < l.size();x++)
        {
            if (l[a] == l[b])
            {
                a++;
                b--;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}
