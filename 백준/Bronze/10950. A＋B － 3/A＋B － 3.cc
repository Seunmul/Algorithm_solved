#include <bits/stdc++.h>

using namespace std;
int T, a, b;

int main()
{
    deque<int> dq;
    cin >> T;

    while (T--)
    {
        cin >> a >> b;
        dq.push_back(a + b);
    }
    while (!dq.empty())
    {
        cout << dq.front() << endl;
        dq.pop_front();
    }
    return 0;
}