#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        for(int j=0; j<len-i-1; j++) {
            if(str[j] > str[j+1]) {
                char t = str[j];
                str[j] = str[j+1];
                str[j+1] = t;
            }
        }
    }
    printf("%s", str);
}