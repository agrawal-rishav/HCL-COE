#include<stdio.h>
int main() {
    int a[] = {4, 82, 2, 398, 988};
    int max = a[0], min = a[0];
    int len = sizeof(a)/sizeof(a[0]);
    for(int i=1; i<len; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("Max: %d\nMin: %d", max, min);
}