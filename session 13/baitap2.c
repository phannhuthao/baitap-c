#include <stdio.h>
#include <string.h>

char str[100];
int ch,ch1,ch2;

void nhapchuoikitu() {
    printf("Nhap chuoi ki tu: \n");
    gets(str);
    puts(str);
}


void noidungchuoi() {
    printf("%s\n",str);
}

void nhap1kitu() {
    printf("Nhap ky tu: ");
    scanf("%c", &ch);
    getchar();
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) count++;
    }
    printf("So lan xuat hien ky tu '%c' trong chuoi: %d\n", ch, count);
}

void nhap2kitu() {
    printf("Nhap 2 ky tu: ");
    scanf("%c %c", &ch1, &ch2);
    getchar();
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch2) str[i] = ch1;
    }
    printf("Chuoi sau khi thay the: %s\n", str);
}

void nhap1kituxoacachuoi() {
    printf("Nhap ky tu: ");
    scanf("%c", &ch);
    getchar();
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ch) str[j++] = str[i];
    }
    str[j] = '\0';
    printf("Chuoi sau khi xoa: %s\n", str);
}






int main () {
    int choice;

    printf("1.Nhap vao chuoi ki tu: \n");
    printf("2.In ra noi dung ki tu: \n");
    printf("3.Nhap vao 1 ki tu, dem so lan xuat hien ki tu trong chuoi: \n");
    printf("4.Nhap vao 2 ki tu, thay the cac ki tu thu 2 trong chuoi thanh ki tu thu nhat: \n");
    printf("5.Nhap vao 1 ki tu, xoa bo tat ca cac ki tu trong chuoi: \n");
    printf("6.Thoat\n");


    while (1) {
        int choice;
        printf("Nhap so ban muon chon:\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
            nhapchuoikitu();
            break;
            case 2:
            noidungchuoi();
            break;
            case 3:
            nhap1kitu();
            break;
            case 4:
                nhap2kitu();
                break;
            case 5:
                nhap1kituxoacachuoi();
                break;
            case 6:
                printf("Ket thuc chuong trinh: \n");
            default:
                printf("Khong co lua chon nay. Moi ban chon lai: \n");
        }
    }
    while (choice != 6);
    return 0;
}