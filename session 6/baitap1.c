#include <stdio.h>
int main () {
    int n1, n2,  tong, hieu, tich, thuong, sodu;
    printf("nhap so n1: ");
    scanf("%d",&n1);
    printf("nhap so n2: ");
    scanf("%d",&n2);
    switch (n1,n2) {
        case 1:
        printf("tong cua 2 so la: %2d\n",n1 +n2);
            scanf("%d%d",&n1,&n2);
        break;
        case 2:
            printf("tong cua 2 so la: %2d\n",n1 -n2);
            scanf("%d%d",&n1,&n2);
            break;
        case 3:
            printf("tong cua 2 so la: %2d\n",n1 *n2);
            scanf("%d%d",&n1,&n2);
            break;
        case 4:
            printf("tong cua 2 so la: %2d\n",n1 / n2);
            scanf("%d%d",&n1,&n2);
            break;

    }
}


