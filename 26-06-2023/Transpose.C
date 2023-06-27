#include<stdio.h>
int main() {
    int a[10][10];
    int b[10][10];
    int row, col;
    scanf("%d %d", &row, &col);
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

}

/*

1 2 3 4
5 6 7 8
9 0 11 12




*/