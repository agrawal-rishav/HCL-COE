#include<stdio.h>
#include<string.h>
int main() {
    char str[100], ch;
    scanf("%[^\n]%*c", str);
    int len = strlen(str);
    int left = 0, right = len-1;
    int isPalin = 1;
    while(left < right) {
        ch = str[left];
        if(ch == ' '  ||  ch == '.'  ||  ch == ',') {
            left++;
            continue;
        }
        ch = str[right];
        if(ch == ' '  ||  ch == '.'  ||  ch == ',') {
            right--;
            continue;
        }
        if(str[left] != str[right]) {
            isPalin = 0;
            break;
        }
        left++;
        right--;
    }
    if(isPalin)
        printf("YES");
    else
        printf("NO");
}