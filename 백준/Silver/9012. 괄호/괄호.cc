#include <bits/stdc++.h>
using namespace std;
int T = 0;
string tmp;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while (T--)
    {
        stack<int> st;
        cin >> tmp;
        for (char c : tmp)
        {
            if (c == '(')
                st.push(c);
            else if (st.empty() == false && c == ')')
            {
                st.pop();
            }
            else if (st.empty() == true && c == ')')
            {
                st.push(c);
                break;
            }
        }
        if (st.empty())
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}