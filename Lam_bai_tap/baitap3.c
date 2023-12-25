#include <stdio.h>
#include <math.h>

int point (int n){
    for (int i=0; i <= sqrt; i++) {
        if (n % i == 0);
        return n;
    }
    return n > 1;
}

int main () {
    int n = 4, m=4;
    int a[4][4] = {1,2,3,4,
                   12,3,7,9,
                   20,10,2,13,
                   3,9,1,12, };
    int res = 0, hang = -1;
    for(int i = 0; i < n; i++){
        int dem = 0;
        for(int j = 0; j < m; j++){
            if(point(a[i][j])){
                ++dem;
            }
        }
        if(dem > res){
            res = dem; hang = i;
        }
    }
    printf("Hang %d co nhieu so nguyen to nhat: \n", hang);
    printf("So luong so nguyen to o hang %d:  %d\n", hang, res);
    return 0;
}