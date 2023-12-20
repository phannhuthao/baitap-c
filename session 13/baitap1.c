#include <stdio.h>
#include <string.h>

char str[100];

void chuoikitu() {
    printf("Nhap chuoi ki tu: \n");
    gets(str);
    puts(str);
}

void dodaichuoi() {
    int len;
    len = strlen(str);
    printf("Length of \"%s\" is %d.\n",str,len);
}

void Indaonguoc() {
    printf("Truoc khi dao nguoc: %s",str);
    printf("\n");
    printf("Sau khi dao nguoc: %s  \n ",strrev(str));
}

void soluongchucai() {
    int len;
    len = strlen(str);
    printf("So luong chu cai trong chuoi : %s la %d \n",str,len);
}


void countDigits(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '100') {
            count++;
        }
    }

    printf("So luong chu so trong chuoi: %d\n", count);
}

void kitudacbiet(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= '0' && str[i] <= '9') || str[i] == ' ')) {
            count++;
        }
    }

    printf("So luong ky tu dac biet trong chuoi: %d\n", count);
}

    int main () {

        int choice;

        printf("1.Nhap vao chuoi ku tu:\n");
        printf("2.In ra do dai chuoi va noi dung chuoi vua nhap:\n");
        printf("3.In ra chuoi dao nguoc:\n");
        printf("4.In ra so luong chu cai trong chuoi:\n");
        printf("5.In ra so luong chu so trong chuoi:\n");
        printf("6.In ra so luong ky tu dac biet trong chuoi:\n");
        printf("7.Thoat:\n");


            while (1) {
                int choice;
                printf("Nhap so ban muon chon: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        chuoikitu();
                        break;
                    case 2:
                        dodaichuoi();
                        break;
                    case 3:
                        Indaonguoc();
                        break;
                    case 4:
                        soluongchucai();
                        break;
                    case 5:
                        countDigits(str);
                        break;
                    case 6:
                        kitudacbiet(str);
                        break;
                    case 7:
                        printf("ket thuc truong trinh: \n ");
                    default:
                        printf("Khong co su lua chon nay:\n ");
                }
            }
            while (choice != 7);
            return 0;
        }


