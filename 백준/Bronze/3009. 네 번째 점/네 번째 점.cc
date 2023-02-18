#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> x_vector(3), y_vector(3);
    
    for(int i = 0; i < 3; i++) cin >> x_vector[i] >> y_vector[i];
    
    if(x_vector[0] == x_vector[1]) cout << x_vector[2] << " ";
    else if(x_vector[0] == x_vector[2]) cout << x_vector[1] << " ";
    else cout << x_vector[0] << " ";

    if(y_vector[0] == y_vector[1]) cout << y_vector[2];
    else if(y_vector[0] == y_vector[2]) cout << y_vector[1];
    else cout << y_vector[0];
    
    return 0;
}