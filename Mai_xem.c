#include <stdio.h>
#define Phan_tu 100

int arr[Phan_tu];
int n,a;
int count = 0;

void inputArray()
{
    int n;
    printf("Nhap so luong phan tu muon them vao mang (toi da 100): ");
    scanf("%d", &n);

    if (n > 0 && n <= Phan_tu) {
        printf("Nhap cac gia tri cho mang:\n");
        for (int i = 0; i < n; ++i) {
            printf("arr[%d] = ", count);
            scanf("%d", &arr[count]);
            count++;
        }
        printf("Da nhap mang thanh cong!\n");
    } else {
        printf("So luong phan tu khong hop le!\n");
    }
}

void printArray() {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < count; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void averagePositive() {
    int sum = 0, positiveCount = 0;
    for (int i = 0; i < count; ++i) {
        if (arr[i] > 0) {
            sum += arr[i];
            positiveCount++;
        }
    }
    if (positiveCount > 0) {
        float average = (float) sum / positiveCount;
        printf("Trung binh cac phan tu duong trong mang la: %.2f\n", average);
    } else {
        printf("Khong co phan tu duong trong mang\n");
    }
}


void GiatriK(int k) {
    printf("Cac vi tri co gia tri bang %d trong mang la:\n", k);
    int found = 0;

    for (int i = 0; i < count; ++i) {
        if (arr[i] == k) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay gia tri %d trong mang!\n", k);
    }

    printf("\n");
}


void sapxepgamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void nhapgiatrim(int m) {
    int i;
    for (i=n-1;(i>=0 &&a[i] > m);i--) {

    }
}




int main() {
    int choice;
    do {
        printf("1. Nhap gia tri n phan tu cua mang\n");
        printf("2. In gia tri cac phan tu trong mang\n");
        printf("3. Tinh trung binh cac phan tu duong trong mang\n");
        printf("4. In ra vi tri cac phan tu co gia tri bang k trong mang\n");
        printf("5. Sap xep mang giam dan bang thuat toan sap xep noi bot\n");
        printf("6. Tinh so luong cac phan tu la so nguyen to trong mang\n");
        printf("7. Sap xep cac phan tu theo yeu cau\n");
        printf("8. Chen gia tri m vao mang da sap xep giam dan\n");
        printf("9. Thoat\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray();
                break;
            case 2:
                printArray();
                break;
            case 3:
                averagePositive();
                break;
            case 4:
                if (count > 0) {
                    int k;
                    printf("Nhap gia tri k can tim trong mang: ");
                    scanf("%d", &k);
                    GiatriK(k);
                } else {
                    printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
                }
                break;
            case 9:
                printf("Tam biet!\n");
                break;
            default:
                printf("Khong co lua chon nay xin ban chon lai: \n");
                break;
        }
    } while (choice != 9);

    return 0;
}
