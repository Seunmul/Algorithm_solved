#include <bits/stdc++.h>
using namespace std;
int N;
string pat;

vector<string> split(string input, string del)
{
    vector<string> ret;
    string token = "";
    long long pos;
    while ((pos = input.find(del)) != string::npos)
    {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + del.length());
    }
    ret.push_back(input);
    return ret;
}

int main()
{
    vector<string> ret;
    cin >> N >> pat;
    ret = split(pat, "*");
    while (N--)
    {
        string tmp, front, back;
        cin >> tmp;
        if(ret[0].length()+ret[1].length()>tmp.length()){
            cout << "NE" << "\n";
            continue;
        }
        front = tmp.substr(0, ret[0].length());
        back = tmp.substr(tmp.length() - ret[1].length(), tmp.length());
        if ((front == ret[0]) && (back == ret[1]))
            cout << "DA"
                 << "\n";
        else
            cout << "NE"
                 << "\n";
    }
    return 0;
}