#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    char c;
    int count = 0;
    scanf(" %c", &c);
    for(int i=0; i<len; i++) {
        if(str[i] == c) {
            count++;
        }
    }
    printf("The count of %c in %s is: %d", c, str, count);
}