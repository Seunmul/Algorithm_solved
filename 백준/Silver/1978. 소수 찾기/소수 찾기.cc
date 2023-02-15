#include <stdio.h> 
#include <math.h>
int main(){
    int N,i,c=0; scanf("%d",&N);
    while(N--) {
        scanf("%d",&i); if(i==1 or (i%2==0 and i!=2)) continue;
        for(int k=3;k<sqrt(i)+1;k+=2) if(i%k==0) {c--; break;}
        c++;
    } 
    printf("%d",c);
    return 0;
}