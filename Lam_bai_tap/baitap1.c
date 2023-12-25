#include <stdio.h>
#include <math.h>

int main(){
    int n = 4, m = 4;
    int a[4][4] = {
            {3, 1, 0, 7},
            {2, 5, 10, 3},
            {3, 7, 4, 1},
            {10, 2, 0, 3}
    };
    int h1 = 0, h2 = 3;
    for(int i = 0; i < m; i++){
        int tmp = a[h1][i];
        a[h1][i] = a[h2][i];
        a[h2][i] = tmp;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}