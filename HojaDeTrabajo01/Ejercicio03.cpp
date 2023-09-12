#include "Ejercicio03.h"
using namespace std;

bool Ejercicio03::isPowerOfTwo(int n)
{
    if ( n == 1)
    {
        return true;
    }
    else if (n % 2 != 0 || n == 0)
    {
        return false;
    }
    return Potencia2 (n/2);
}
int main()
{
    int numero;
    cout << "Ingrese un número: "; cin >> numero;

    if (esPotenciaDeDos(numero)) {
        cout << numero << " es una potencia de dos // true " << endl;
    } else {
        cout << numero << " no es una potencia de dos // false " << endl;
    }

    return 0;
}
