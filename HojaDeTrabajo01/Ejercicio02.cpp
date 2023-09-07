#include "Ejercicio02.h"

bool isAPalindrome(string& s, int l, int r) {
    if (l >= r)
        return true;

    if (s[l] != s[r])
        return false;

    return isAPalindrome(s, l + 1, r - 1);
}

bool Ejercicio02::isPalindrome(string& s)
{
    return isAPalindrome(s, 0, s.length() - 1);
}
