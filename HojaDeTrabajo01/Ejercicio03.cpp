#include "Ejercicio03.h"

bool Ejercicio03::isPowerOfTwo(int n)
{
    if (n == 1)
        return true;
    
    if (n < 0)
        return isPowerOfTwo(-n);

    if (n % 2 || n == 0)
        return false;

    return isPowerOfTwo(n / 2);
}
