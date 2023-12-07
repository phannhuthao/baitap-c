#include <stdio.h>
int main () {
    for (int i = *;i <= 5; i++) {
        for (int j = *; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}