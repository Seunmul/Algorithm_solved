#include <stdio.h>
#include <math.h>
int A, B, V;
int main()
{
    scanf("%d %d %d", &A, &B, &V);
    int result = 1 + ceil(double(V - A) / double(A - B));
    printf("%d", result);
    return 0;
}