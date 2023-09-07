#include "Ejercicio04.h"

void generate(int n, int openCount, int closedCount, string sb, vector<string>& results) {
    if (openCount == n && closedCount == n) {
        results.push_back(sb);
        return;
    }

    if (openCount < n) {
        sb.append("(");
        generate(n, openCount + 1, closedCount, sb, results);
        sb.pop_back();
    }

    if (closedCount < openCount) {
        sb.append(")");
        generate(n, openCount, closedCount + 1, sb, results);
        sb.pop_back();
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> results;
    generate(n, 0, 0, "", results);
    return results;
}
