#include<stdio.h>
int sum(int n) {
    if(n == 0) 
        return 0;
    return n%10 + sum(n/10);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("The sum of digits of %d is: %d", n, sum(n));
}