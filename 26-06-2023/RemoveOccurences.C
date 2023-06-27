#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    char c;
    scanf(" %c", &c);
    for(int i=0; i<len; i) {
        if(str[i] == c) {
            for(int j=i; j<len-1; j++) {
                str[j] = str[j+1];
            }
            len--;
        } else {
            i++;
        }
    }
    for(int i=0; i<len; i++) {
        printf("%c", str[i]);
    }
}