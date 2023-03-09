#include <bits/stdc++.h>
using namespace std;
string s;
int sol[27], chk_cnt;
char tmp;

vector<char> v;
int main()
{
    cin >> s;
    for (unsigned int i = 0; i < s.length(); i++)
        sol[s[i] - 'A' + 1]++;

    for (unsigned int i = 1; i <= 26; i++)
    {
        char k = (char)(i - 1 + 'A');
        if (sol[i] % 2 != 0)
        {
            chk_cnt++;
            if (chk_cnt > 1)
            {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            tmp = k;
        }
        for (int j = 0; j < sol[i] / 2; j++)
            v.push_back(k);
    }
    for (char c : v)
        cout << c << "";
    if (s.length() % 2 != 0)
        cout << tmp << "";
    for (; !v.empty(); v.pop_back())
        cout << v.back() << "";

    return 0;
}