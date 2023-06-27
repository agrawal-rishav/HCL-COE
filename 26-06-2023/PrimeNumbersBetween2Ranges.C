#include<stdio.h>
int isPrime(int n) {
    for(int i=2; i<n; i++)
        if(n%i == 0)
            return 0;
    return 1;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }
}