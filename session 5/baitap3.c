#include <stdio.h>
int main () {
    int  sophut,thanhtien, giathuebao;
    printf("nhap so phut goi: ");
    scanf("%d",&sophut);
    giathuebao = 250000;
    if (sophut <= 50) {
        thanhtien= sophut=giathuebao+ 50 *600;
    } else if (sophut <= 150) {
        thanhtien = sophut=giathuebao + 50 * 400;
    } else if (sophut <= 200) {
        thanhtien= sophut + giathuebao * 200;
    } else (thanhtien=giathuebao+50*600+100*400+50*200+(sophut-200)*100);
    printf("tien dien thoai la: %d",thanhtien);
    return 0;
}
