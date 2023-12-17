#include <stdio.h>
int main () {
    int* p1, a;
    a = 2;
    p1 = &a;
    printf("Gia tri:%d",*p1);
    printf("\n");
    a = 3;
    p1 = &a;
    printf("Gia tri:%d",*p1);
}
