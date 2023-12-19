#include <stdio.h>
#define Phan_tu 100

int arr[Phan_tu];
int cout = 0;

void Nhapgiatrin() {   // case 1
    int n;
    printf("Nhap so luong phan tu muon nhap vao (khong qua 100 phan tu): ");
    scanf("%d", &n);

    if (n > 0 && n <= Phan_tu) {
        printf("Nhap gia tri cho mang: \n");
        for (int i = 0; i < n; ++i) {
            printf("arr[%d] = ", cout);
            scanf("%d",&arr[cout]);
            cout ++;
        }
        printf("Da nhap mang thanh cong: \n");
    } else {
        printf("So luong phan tu khong hop le: ");
    }
}


void ingiatri() {  // case 2
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < cout; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void averagePositive() { // case 3
    int sum = 0, positiveCount = 0;
    for (int i = 0; i < cout; ++i) {
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


void giatrik(int k) { // case 4
    printf("Cac vi tri co gia tri bang %d trong mang la:\n", k);
    int found = 0;

    for (int i = 0; i < cout; ++i) {
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


void bubble_sort_descending(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int count_primes(float arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime((int)arr[i])) {
            count++;
        }
    }
    return count;
}

void sort_by_divisibility(float arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (left < right && arr[left] / 3 == 0 && ((int)arr[left] % 2 == 0)) {
            left++;
        }
        while (left < right && (arr[right] / 3 != 0 || ((int)arr[right] % 2 != 0))) {
            right--;
        }
        if (left < right) {
            float temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    bubble_sort_descending(arr, left);
    bubble_sort_descending(arr + left, n - left);
}

void insert_value_sorted(float arr[], int *n, float m) {
    int i = *n - 1;
    while (i >= 0 && arr[i] < m) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = m;
    (*n)++;
}

int main() {
    int choice, n = 0;
    float my_array[100], m, k;

    while (1) {
        printf("1.Nhap gia tri n phan tu cua mang:\n");
        printf("2.In ra gia tri cac phan tu trong mang:\n");
        printf("3.Tinh trung binh cac phan tu duong(>0) trong mang:\n");
        printf("4.In ra vi tri (chi so) cac phan tu co gia tri bang k trong mang (k nhap tu ban phim):\n");
        printf("5.Su dung thuat toan sap xep noi bot sap xep mang giam dan:\n");
        printf("6.Tinh so luong cac phan tu la so nguyen trong mang: \n");
        printf("7.Sap xep cac phan tu chan san chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai ơ gia giua theo thu tu tang gian:\n");
        printf("8.Nhap gia tri m tu ban phim, chen gia tri m vao mang(sap xep giam dan) theo dung vi tri:\n");
        printf("9.Thoat\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Nhapgiatrin();
                break;
            case 2:
                ingiatri();
                break;
            case 3:
                averagePositive();
                break;
            case 4:
                if (cout > 0) {
                    int k;
                    printf("Nhap gia tri k can tim trong mang: ");
                    scanf("%d", &k);
                    giatrik(k);
                } else {
                    printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
                }
                break;
            case 6:
                printf("So luong cac so nguyen to trong mang là: %d\n", count_primes(my_array, n));
                break;

                break;
            case 9:
                printf("Ket thu chuong trinh: \n");
                break;
            default:
                printf("khong co su lua chon nay. Moi nhap lai: \n");
                break;
        }
        while (choice != 9);
        return 0;
    }
}