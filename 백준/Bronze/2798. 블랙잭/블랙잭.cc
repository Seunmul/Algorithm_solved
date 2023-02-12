#include <bits/stdc++.h>

using namespace std;
int N, M;
int calcul(vector<int> &v)
{
    int sum = 0, result = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                sum = v[i] + v[j] + v[k];
                if (sum <= M && sum > result)
                {
                    result = sum;
                }
            }
        }
    }
    return result;
}
int main()
{
    cin >> N >> M;
    vector<int> v;

    while (N-- > 0)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    cout << calcul(v) << endl;

    return 0;
}