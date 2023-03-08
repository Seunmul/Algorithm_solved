#include <bits/stdc++.h>
using namespace std;
int n, i;
int main()
{
    while (cin >> n)
    {
        int tmp = 1;
        int cnt = 1;
        while (true)
        {
            if (tmp % n == 0) break;
            tmp = (tmp * 10 + 1) % n; //n mod k == (n mod k) mod k
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}