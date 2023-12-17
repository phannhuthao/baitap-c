#include <stdio.h>
int main () {
    int* a, b;
    int* a1, b1;
    b = 1;
    b1= 2;
    a = &b;
    a1 = &b1;
    printf("Gia tri: %d",*a);
    printf("\n");
    printf("Gia tri: %d",*a1);
    printf("\n");

    printf("thay doi gia tri cua 2 con tro la: ");
    printf("\n");

    b = 2;
    b1 = 1;
    a = &b;
    a1 = &b1;
    printf("Gia tri sau khi thay doi: %d",*a);
    printf("\n");
    printf("Gia tri sau khi thay doi: %d",*a1);


}
