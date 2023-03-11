#include <bits/stdc++.h>
using namespace std;
string s;
int arr[27], tmp = -1, idx = -1, cnt = 0;
int main()
{
    cin >> s;
    for (char c : s)
    {
        if ((int)c >= 97 && (int)c <= 122)
            arr[c - 'a' + 1]++;
        else
            arr[c - 'A' + 1]++;
    }

    for (int i = 1; i <= 26; i++)
    {
        if (arr[i] > tmp)
        {
            idx = i;
            tmp = arr[i];
            cnt = 0;
        }
        else if (arr[i] == tmp)
        {
            cnt++;
        }
    }

    if (cnt > 0)
        cout << "?"
             << "\n";
    else
        cout << (char)(idx + 'A' - 1) << "\n";

    return 0;
}