#include<stdio.h>
int factorial(int n) {
    int f = 1;
    for(int i=1; i<=n; i++) f *= i;
    return f;
}
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int n1 = n;
    while(n != 0) {
        int d = n%10;
        sum += factorial(d);
        n = n/10;
    }
    if(n1 == sum)
        printf("YES");
    else
        printf("NO");
}