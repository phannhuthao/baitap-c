#include <stdio.h>
int main () {
    double toan, van, anh, tong, trungbinh;
    printf("nhap diem mon toan: ");
    scanf("%d",&toan);
    printf("nhap diem mon van: ");
    scanf("%d",&van);
    printf("nhap diem mon anh: ");
    scanf("%d",&anh);
    printf("tong cua 2 mon la: ");
    tong = toan + van + anh;
    trungbinh = (toan + van + anh)/3;
    printf("tong diem la: %.2ld\n  diem trung binh la: %.2ld\n ", tong ,trungbinh);

    return 0;
}
