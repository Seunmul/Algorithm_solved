#include <bits/stdc++.h>

using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    if (a > b)
        cout << ">" << endl;
    else if (a < b)
        cout << "<" << endl;
    else if (a == b)
        cout << "==" << endl;

    return 0;
}
