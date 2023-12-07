#include <stdio.h>
int main () {
    int number1, number2, number3, min, max;
    printf("nhap gia tri cua number1: ");
    scanf("%d",&number1);
    printf("nhap gia tri cua number2: ");
    scanf("%d",&number2);
    printf("%d",number3);
    max=number1;
    min=number2;
    if (max<number2){max=number2;}
    if (max<number3){max=number3;}
    if(min>number2){min=number2;}
    if(min>number3){min=number3;}
    printf ("so lon nhat la : %d so nho nhat la: %d ",max,min);
    return 0;

}
