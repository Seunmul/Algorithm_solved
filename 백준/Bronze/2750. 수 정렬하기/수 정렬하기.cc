#include <bits/stdc++.h>

using namespace std;

int T;
int main()
{
    cin >> T;
    vector<int> v(T);
    for (int i = 0; i < T; i++)
        cin >> v.at(i);

    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << "\n";
    return 0;
}