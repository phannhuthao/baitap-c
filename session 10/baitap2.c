#include <stdio.h>
int songuyento(int n){
    if(n<=1){
        return 0;
    }
    for (int i =2; i*i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    printf("nhap vao gia tri a :");
    scanf("%d",&a);
    printf("nhap vao gia tri b :");
    scanf("%d",&b);

    printf("\nOUTPUT:\n");

    for (int i=a+1; i<b ; i++){
        if(songuyento(i)){
            printf("%d",i);
        }
    }
    return 0;
}
