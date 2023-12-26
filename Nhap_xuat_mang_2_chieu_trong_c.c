#include <stdio.h>
int main (void) {
    int j = 0;
    int y,x;
    printf("<<Nhap do dai mang 1 chieu trong mang 2 chieu: ");
    scanf("%d", &y);
    printf("<<Nhap do dai so phan tu  trong mang 1 chieu: ");
    scanf("%d", &x);

    int array[y][x];
    printf("<<Nhap phan tu:\n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++);
        scanf("%d", &array[i][j]);
    }

    printf("<<Mang vua nhap:\n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++);
        printf("%d ",array[i][j]);
        printf("\n");
    }
}
