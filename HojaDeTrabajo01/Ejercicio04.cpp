#include "Ejercicio04.h"


    void parentesis(string s, int inicio, int final, int n, vector<string> &r) 
    {
        if (inicio == n && final == n) {
            r.push_back(s);
            return;
        }
        if (inicio > final) {
            parentesis(s + ')', inicio, final + 1, n, r);
        }
        if (inicio < n) {
            parentesis(s + '(', inicio + 1, final, n, r);
        }
    }
    vector<string> Ejercicio04::generateParenthesis(int n)
    {
        vector<string> r;
        parentesis("", 0, 0, n, r);
        return r;
    }

