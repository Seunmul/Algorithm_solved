#include <bits/stdc++.h>
using namespace std;

int N, M;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    vector<string> v(N);
    map<string, int> mp;
    string tmp;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        v.at(i)=tmp;
        mp.insert(make_pair(tmp, i));
    }
    while (M--)
    {
        cin >> tmp;
        int i = atoi(tmp.c_str());
        if (i > 0) cout << v[i - 1] << "\n";
        else if (i == 0) cout << mp[tmp] + 1 << "\n";
    }
    return 0;
}