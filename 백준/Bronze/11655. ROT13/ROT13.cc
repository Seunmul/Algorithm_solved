#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    for (unsigned int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]) || s[i] == 32)
        {
            cout << s[i] << "";
            continue;
        }
        char tmp;
        (s[i] > 77 && s[i] <= 90) || (s[i] > 109 && s[i] <= 122) ? tmp = (char)(s[i] - 13) : tmp = (char)(s[i] + 13);
        cout << tmp << "";
    }
    return 0;
}