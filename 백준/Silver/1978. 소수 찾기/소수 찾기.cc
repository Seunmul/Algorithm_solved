#include <stdio.h> 
#include <math.h>
bool cal(int n){
    if(n==1 or (n%2==0 and n!=2)) return false;
    double tmp = sqrt(n); for(int i=3;i<abs(tmp)+1;i+=2) if(n%i==0) return false;
    return true;
}
int main(){
    int N,cnt=0; scanf("%d",&N); int v[N];
    for(int i=0;i<N;i++) scanf("%d",v+i);
    for(int i:v) if(cal(i)) cnt++; 
    printf("%d",cnt);
    return 0;
}