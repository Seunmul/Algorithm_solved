#include <bits/stdc++.h>

using namespace std;

int cal(string a){
    int b=0;
    for(unsigned long i=0;i<a.size();i++)    
        b+=int(a[i]-'0');
    b+=atoi(a.c_str());
    return b;
}

int main(){
    string N,M,str;
    int tmp,N_int;
    cin >> N;
    N_int = atoi(N.c_str());
    // for(unsigned long i=0;i<N.size();i++)    
    //     if(N.size()-i<=5)
    //         M+='0';
    //     else
    //         M+=N[i];
    // cout<< M <<"\n";
    M="1";
    while (1) {
        int M_int = atoi(M.c_str());
        tmp = cal(M);
        if (N_int==tmp)
            break;
        
        if(N_int>M_int)
            M=to_string(M_int+1);
        else if (N_int<=M_int)
        {
            M='0';
            break;
        }
        // cout << M << endl;
    }
    

    cout << M << endl;
    return 0;
}