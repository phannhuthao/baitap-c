#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int y, x;
    printf("Nhap so hang y va so cot x cua mang 2 chieu: ");
    scanf("%d",&y);
    scanf("%d",&x);
    int **nums1;
    nums1 = malloc(sizeof(int *)* y);
    for (int i = 0; i < y; i++) {
        nums1[i] = malloc(sizeof(int) *x);
    }

    printf("Nhap phan tu: \n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d",&nums1[i][j]);
        }
    }
    printf("Mang 2 chieu vua nhap la: \n");
    for (int i=0; i < y; i++) {
        for (int j=0; j < x; j++) {
            printf("%d ",nums1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < y; i++) {
        free(nums1[i]);
    }
    free(nums1);
    return 0;
}
