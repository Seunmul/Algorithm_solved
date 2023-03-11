#include <bits/stdc++.h>
using namespace std;
string s;
int arr[27], mx = -1, idx = -1, cnt = 0;
int main()
{
    cin >> s;
    for (char c : s)
        if (c >= 'a' && c <= 'z') arr[c - 'a' + 1]++;
        else arr[c - 'A' + 1]++;
    for (int i = 1; i <= 26; i++)
        if (arr[i] > mx)
        {
            idx = i; mx = arr[i]; cnt = 0;
        }
        else if (arr[i] == mx) cnt++;
    if (cnt > 0) cout << "?" << "\n";
    else cout << (char)(idx + 'A' - 1) << "\n";
    return 0;
}