#include <stdio.h>
int main () {
    int thang, tiengui, tienlai,  tong;
    printf("nhap so thang: ");
    scanf("%d",&thang);
    float laixuat = thang * 0.1;
    tiengui = 1000;
    tienlai = tiengui * laixuat;
    tong = tiengui * tienlai;
    printf("tong so tien la: %d",tong);
    }