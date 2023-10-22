#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{

    int p = 0;
    int p2 = s.length() - 1;

    int con = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int x = 0; x < s.size(); x++)
        {
            if (s[p] == s[p2])
            {
                p++;
                p2--;
            }
            else
            {
                // es palindroma 
                return false;
            }
        }
    }
    // no es palindroma 
    return true;
 }
