#include <bits/stdc++.h>
using namespace std;
int t1, t2, res;
int pay[3], a[101] = {
                -1,
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 3; i++)
        cin >> pay[i];
    for (int i = 1; i <= 3; i++)
    {
        cin >> t1 >> t2;
        for (int j = t1; j < t2; j++)a[j]++;
    }
    for (int i = 1; i<=100; i++) res += a[i] * pay[a[i] - 1];
    cout << res << "\n";
    return 0;
}