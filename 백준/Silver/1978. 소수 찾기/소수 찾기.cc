#include <bits/stdc++.h>

using namespace std;

bool cal(int n){
    // cout << "입력:"<<n<<"\n";
    if(n<0 or n>1001) return false;
    if(n==1) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;

    double tmp = sqrt(n);
	if (abs(tmp - (int)tmp < 1e-12)) return false;
	else
        for(int i=3;i<abs(tmp)+1;i+=2)
            if(n%i==0) return false;
    return true;
    
}

int main(){
    int N,cnt=0;
    int arr[100]={0,};
    cin >> N;
    for(int i=0;i<N;i++)
        cin>>arr[i];
    


    for(int i=0;i<N;i++)
        if(cal(arr[i]))
            cnt++;
    
    cout << cnt;
    return 0;
}