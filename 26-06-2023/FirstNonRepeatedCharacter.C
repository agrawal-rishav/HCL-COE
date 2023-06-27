#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    char c = '@';
    for(int i=0; i<len; i++) {
        for(int j=i+1; j<len; j++) {
            if(str[i] == str[j]) {
                c = str[i];
                break;
            }
        }
        if(c == '@') {
            printf("%c", str[i]);
            break;
        } else
            c = ' ';
    }
}