#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        v[i] = tmp;
    }
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    cout << min << " " << max;

    return 0;
}