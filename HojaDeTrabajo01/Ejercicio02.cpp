#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{
    string r =s;
    r(r.begin.(), r.end());

    if (s == r)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main ()
{
    string palabra;
    cout <<"ingrese la palabra: "; cin >> palabra 

    if (esPalidromo (palabra))
    {
        cout << palabra << "es palidromo "<<endl;
    }
    else 
    {
        cout << palabra << " no es palidromo "<<endl;
    }
    return 0;
}
