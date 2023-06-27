#include<stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {2, 3, 8, 9, 1};
    int l1 = sizeof(a)/sizeof(a[0]);
    int l2 = sizeof(b)/sizeof(b[0]);
    for(int i=0; i<l1; i++) {
        for(int j=0; j<l2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
}