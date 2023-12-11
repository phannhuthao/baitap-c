#include <stdio.h>
int main(){
    int N,I;
    do {
        printf("nhap so nguyen n: ");
        scanf("%d",&N);
        if (N<1||N>9){
            printf("sai roi xin moi ");
        }
    } while (N<1||N>9);
    printf("bang cuu chuong %d la\n",N);
    for (I=1;I<10;I++){
        printf("%d X %d = %d\n",N,I,N*I);
    }
    return 0;
}


