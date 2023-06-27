#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int f[n+1];
    f[0] = 1;
    for(int i=1; i<=n; i++) {
        f[i] = i * f[i-1];
    }
    printf("The factorial is: %d", f[n]);
}