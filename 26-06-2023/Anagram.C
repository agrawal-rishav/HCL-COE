//Program to check if a string is anagram of another

#include<stdio.h>
#include<string.h>
int main() {
    char ch1[100];
    char ch2[100];
    scanf("%s %s", ch1, ch2);
    int a[26];
    for(int i=0; i<26; i++) a[i] = 0;
    for(int i=0; i<strlen(ch1); i++) {
        a[(int)(ch1[i]) - 97]++;
    }
    for(int i=0; i<strlen(ch2); i++) {
        a[(int)(ch2[i]) - 97]--;
    }
    printf("%s %s", ch1, ch2);
    int k = 0;
    for(int i=0; i<26; i++) {
        if(a[i] != 0) {
            k = 1;
            break;
        }
    }
    if(k == 0  &&  strlen(ch1) == strlen(ch2)) 
        printf("YES");
    else
        printf("NO");
}