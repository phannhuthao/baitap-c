#include <stdio.h>
void capthu1 (int a, int b) {
    printf("Cap thu 1 la: \n");
    if (a < b) {
        printf("%d + %d = %d", a, b, a + b);
        printf("\n");
        printf("%d - %d = %d", a, b, a - b);
    } else {
        printf("Error:");
    }
    printf("\n");
}
void capthu2 (int c, int b) {
    printf("Cap thu 2 la: \n");
    if (b < c) {
        printf("%d + %d = %d", b, c, b + c);
        printf("\n");
        printf("%d - %d = %d", b,c,b - c);
    } else {
        printf("Error:");
    }
    printf("\n");
}

void capthu3 (int a, int c) {
    printf("Cap thu 3 la: \n");
    if (a < c) {
        printf("%d + %d = %d", a, c, a + c);
        printf("\n");
        printf("%d - %d = %d", a, c, a - c);
    }else {
        printf("Error:");
    }
    printf("\n");
}
int main () {
    int a,b,c;
    printf("Nhap 3 so cho a,b,c: \n");
    scanf("%d %d %d",&a,&b,&c);
    capthu1(a,b);
    capthu2(c,b);
    capthu3(a,c);
}
