#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    for (char c:s)
    {
        if (isdigit(c) || c == 32)
        {
            cout << c << "";
            continue;
        }
        char tmp;
        (c > 77 && c <= 90) || (c > 109 && c <= 122) ? tmp = (c - 13) : tmp = (c + 13);
        cout << tmp << "";
    }
    return 0;
}