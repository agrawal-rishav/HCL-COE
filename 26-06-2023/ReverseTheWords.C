#include<stdio.h> 
#include<string.h>

int main() {
    char str[100];
    int len = 0;
    scanf("%[^\n]%*c", str);
    len = strlen(str);
    char ch[100];
    int ind = 0;
    for(int i=len-1; i>=0; i--) {
        if(str[i] != ' ') {
            ch[ind++] = str[i];
            continue;
        }
        for(int i=ind-1; i>=0; i--) {
            printf("%c", ch[i]);
        }
        ind = 0;
        printf(" ");
    }
    for(int i=strlen(ch) - 1; i>=0; i--) {
        printf("%c", ch[i]);
    }
}