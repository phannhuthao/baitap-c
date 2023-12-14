#include <stdio.h>
void capthu1(int a, int b) {
    printf("Cap thu 1 la: \n ");
    if (a,b != 0) {
        printf("%d * %d = %d", a, b, a * b);
        printf("\n");
        printf("%d / %d = %d", a, b, a / b);
    } else if (a < b) {
        printf("a khong chia het cho b");
    }
    printf("\n");
}

void capthu2(int b, int c) {
    printf("Cap thu 2 la: \n");
    if (b,c != 0) {
        printf("%d * %d = %d",b,c,b*c);
        printf("\n");
        printf("%d / %d = %d",b,c,b/c);
    } else if (b < c) {
        printf("b khong chia het cho c");
    }
    printf("\n");
}

void capthu3(int a, int c) {
    printf("Cap thu 3 la: \n");
    if (a,c != 0) {
        printf("%d * %d = %d",a,c,a*c);
        printf("\n");
        printf("%d / %d = %d",a,c,a/c);
    } else if (a < c) {
        printf("a khong chia het cho c");
    }
    printf("\n");
}

int main () {
    int a,b,c;
    printf("Nhap 3 so a,b,c la: ");
    scanf("%d %d %d",&a,&b,&c);
    capthu1(a,b);
    capthu2(b,c);
    capthu3(a,c);
}