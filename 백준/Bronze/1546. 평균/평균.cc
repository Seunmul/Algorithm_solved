#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin >> N;
    vector<int> v(N);
    double result = 0.00;

    for (int i = 0; i < N; i++)
        cin >> v[i];

    double max = *max_element(v.begin(), v.end());
    for (int i : v)
        result += (i * 100) / max;
    // cout << fixed;
    cout << setprecision(9) << result / N << endl;
    return 0;
}