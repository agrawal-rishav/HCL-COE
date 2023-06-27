#include<stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int a = -1, b = 1, c = 0;
    for(int i=0; i<n; i++) {
        c = a+b;
        if(c%2 == 0) sum += c;
        a = b;
        b = c;
    }
    printf("%d", sum);
}