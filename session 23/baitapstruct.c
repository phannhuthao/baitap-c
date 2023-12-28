#include <stdio.h>
typedef struct {
    char tenthanhpho[100];
    double docviet;
    int sodan;
    int tongthunhap;
}city;
void tiledocviet(city a[], int n ){
    int b;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j <n ; ++j) {
            if(a[i].docviet < a[j].docviet){
                b= j ;
            }
        }
    }
    printf("\nThanh pho co ti le doc viet cao nhat la : %s\n",a[b].tenthanhpho);
}

void tongthunhap(city a[],int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].tongthunhap > a[c].tongthunhap) {
            c = i;
        }
    }
    printf("\n Thanh pho co tong thu nhap cao nhat la: %s\n", a[c].tenthanhpho);

}

int main() {

    // city from, *p1;
    //p1 = city;


    int n;
    printf("nha so thanh pho ban muon chon : ");
    scanf("%d", &n);
    city a[n];
    for (int i = 0; i < n; ++i) {
        printf("nhap chi tiet ten thanh pho thu %d\n", i+1);
        printf("nhap ten thanh pho: ");
        getchar();
        gets(a[i].tenthanhpho);
        printf("nhap tong so dan: ");
        scanf("%d", &a[i].sodan);
        printf("nhap ti le biet doc viet: ");
        scanf("%lf", &a[i].docviet);
        printf("nhap tong thu nhap: ");
        scanf("%d", &a[i].tongthunhap);
    }
    tiledocviet(a, n);
    tongthunhap(a, n);
    return 0;


}

















