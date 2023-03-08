#include <bits/stdc++.h>
using namespace std;
int n, m;
map<string, int> mp;
string name, type;
void sol()
{
    cin >> name >> type;
    auto it = mp.find(type);
    if (it == mp.end())
        mp[type] = 1;
    else
        ((*it).second)++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while (n--)
    {
        int result = 1;
        cin >> m;
        while (m--)
            sol();
        for (auto it : mp)
            result *= ((it).second + 1);

        cout << result - 1 << "\n";
        // 각 종류별 옷 개수(k) + 안입는 경우의수 1 => k+1 개 중 하나를 선택하는 조합연산,
        // 여기서 둘 다 안입는 경우를 제거.
        mp.clear();
    }
    return 0;
}