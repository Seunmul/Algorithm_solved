#include <bits/stdc++.h>
using namespace std;
int N, cnt = 0;
string tmp;
int arr[26] = {
    0,
};
vector<string> res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    while (N--)
    {
        cin >> tmp;
        arr[tmp[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        if (arr[i] >= 5)
        {
            cout << (char)(i + 97) << "";
            cnt++;
        }

    if (cnt == 0)
        cout << "PREDAJA"
             << "\n";
    return 0;
}