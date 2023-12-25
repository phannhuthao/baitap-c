#include <stdio.h>
#include <math.h>

int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int main(){
    int n = 4, m = 4;
    int a[4][4] = {
            {3, 1, 0, 7},
            {2, 5, 10, 3},
            {3, 7, 4, 1},
            {10, 2, 0, 3}
    };
    //Duyệt theo hàng, i là hàng, j là cột
    int res = 0, hang = -1;
    for(int i = 0; i < n; i++){
        int dem = 0;
        for(int j = 0; j < m; j++){
            if(prime(a[i][j])){
                ++dem;
            }
        }
        if(dem > res){
            res = dem; hang = i;
        }
    }
    printf("Hang %d co nhieu so nguyen to nhat:\n", hang);
    printf("So luong so nguyen to o hang %d: %d\n", hang, res);
    return 0;
}
