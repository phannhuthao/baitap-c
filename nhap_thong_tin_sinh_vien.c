#include <stdio.h>

typedef struct person {
    int sinhvien;
    char ten[100];
    int tuoi;
    int diem;
    char gioitinh;
}person;

int main (void) {
    int diem;
    person sinhvien, *p;
    p = &sinhvien;

    printf("Nhap ten sinh vien: \n");
    gets(p->ten);
    printf("Nhap tuoi sinh vien: \n");
    scanf("%d",&(p->tuoi));
    printf("Nhap gioi tinh sinh vien: \n");
    scanf("%s",&(p->gioitinh));
    printf("Nhap diem cua sinh vien hoc ki qua: \n");
    scanf("%d",&(p->diem));


    if ( p->diem > 5) {
        printf("Dau:\n");
    } else if (p->diem < 5) {
        printf("Rot qua non:\n");
    }

    if (p->tuoi >= 18) {
        printf("Da du tuoi de di dai hoc hoac di hoc nghe:\n ");
    }else if (p->tuoi < 18) {
        printf("Chua du tuoi di dai hoc hoac hoc nghe van la tre vi thanh nien:\n ");
    }


    printf("Thong tin sinh vien ban vua nhap la: \n");
    printf("Ten sinh vien la       : %s\n",p->ten);
    printf("Tuoi sinh vien la      : %d\n",p->tuoi);
    printf("diem sinh vien la      : %d\n",p->diem);

    return 0;
}