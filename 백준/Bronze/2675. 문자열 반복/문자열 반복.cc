#include <bits/stdc++.h>

using namespace std;

int T;
string v;

int main()
{
    cin >> T;
    vector<string> s_vec(T);
    vector<int> i_vec(T);
    for (int i = 0; i < T; i++)
        cin >> i_vec[i] >> s_vec[i];

    for (int i = 0; i < T; i++)
    {
        string tmp = s_vec[i];
        int R = i_vec[i];
        for (int j = 0; j < tmp.length(); j++)
            for (int k = 0; k < R; k++)
                cout << tmp[j];
        cout << "\n";
    }
    return 0;
}