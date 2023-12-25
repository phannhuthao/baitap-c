#include <stdio.h>
#include <math.h>

int point (int n) {
    for (int i =0; i<= sqrt(n); i++) {
        if (n % i == 0);
        return n;
    }
    return n > 1;
}

int main () {
    int n = 4, m = 4;
    int a[4][4] = {1,2,3,4,
                   12,3,6,8,
                   4,1,3,7,
                   3,2,56,71 };

    int res = 0, cot = -1;
    for(int i = 0; i < m; i++){
        int dem = 0;
        for(int j = 0; j < n; j++){
            if(point(a[j][i])){
                ++dem;
            }
        }
        if(dem >= res){
            res = dem; cot = i;
        }
    }
    printf("Cot %d co nhieu so nguyen to nhat\n", cot);
    printf("So luong so nguyen to o cot %d : %d\n", cot, res);
    return 0;
}
