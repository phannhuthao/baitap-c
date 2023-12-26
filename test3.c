#include <stdio.h>
typedef struct   {
    char tenthanhpho[100];
    double docviet;
    int sodan;
    int tongthunhap;
}city;


void tiledocvietcaonhat(city a[], int n) {
    int b;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i].docviet < a[j].docviet) {
                b = j;
            }
        }
    }
    printf("\nThanh pho co ti le doc viet cao nhat la: %s\n",a[b].tenthanhpho);
}


void tongthunhapcaonhat(city a[], int n) {
    int c;
    for (int i = 0; i < n; i++) {
        if (a[i].tongthunhap > a[c].tongthunhap) {
            c=i;
        }
    }
    printf("\n Thanh pho co tong thu nhap cao nhat la: %s\n",a[c].tenthanhpho);

}


int main () {

    int n;
    printf("Nhap so thanh pho ban muon chon:");
    scanf("%d",&n);
    city a[n];
    for (int i=0; i < n; ++i) {
        printf("Nhap chi tiet thanh pho thu: %d\n",i);
        printf("Nhap ten thanh pho: ");
        getchar();
        gets(a[i].tenthanhpho);
        printf("Nhap tong so dan: ");
        scanf("%d",&a[i].sodan);
        printf("Nhap ti le biet doc: ");
        scanf("%lf",&a[i].docviet);
        printf("Nhap tong thu nhap cua thanh pho: ");
        scanf("%d",&a[i].tongthunhap);
    }
    tiledocvietcaonhat(a, n);
    tongthunhapcaonhat(a, n);
    return 0;
}





