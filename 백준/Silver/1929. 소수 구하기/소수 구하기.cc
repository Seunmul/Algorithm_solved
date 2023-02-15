#include <stdio.h> 
#include <math.h>
int main(){
    int N,M,c=1; 
    scanf("%d %d",&N,&M);
    for(int i=N;i<=M;i++){
        if(i==1 or (i%2==0 and i!=2)) continue;
        int tmp = sqrt(i)+1;
        for(int k=3;k<tmp;k+=2) if(i%k==0) {c=0; break;}
        if(c==1) printf("%d\n",i);
        c=1;
    } 
    return 0;
}