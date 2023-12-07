#include <stdio.h>
int main () {
    int thousandDigit, hundredDigit, dozenDigit, unitDigit, tong;
    printf("nhap chu so hang don vi: ");
    scanf("%d",&unitDigit);
    printf("nhap chu so hang chuc: ");
    scanf("%d",&dozenDigit);
    printf("nhap chu so hang tram: ");
    scanf("%d",&hundredDigit);
    printf("nhap chu so hang nghin: ");
    scanf("%d",&thousandDigit);
    tong= thousandDigit + hundredDigit + dozenDigit + unitDigit;
    printf("tong cua cac so da nhap la: %d\n ",tong);
    printf("so dao nguoc cua tong cac so da nhap la: %d%d%d%d",thousandDigit,hundredDigit,dozenDigit,unitDigit);

    return 0;