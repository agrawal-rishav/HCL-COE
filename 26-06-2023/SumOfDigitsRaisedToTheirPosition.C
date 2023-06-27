#include<stdio.h>
#include<math.h>
int digitCount(int n) {
    if(n == 0)
        return 0;
    return 1 + digitCount(n/10);
}
int pow(int a, int b) {
    if(b == 0) 
        return 1;
    return a * pow(a, b-1);
}
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int c = digitCount(n);
    while(n != 0) {
        int d = n%10;
        sum += pow(d, c--);
        n = n/10;
    }
    printf("%d", sum);
}