#include <stdio.h>
int main (void) {
    int number[][5] =
            {{1,2, 5},
             {2,3},
             {3,4},
             {4,5},
             {5,6}
            } ;
    printf("lay gia tri phan tu ra  : %d\n",number[0][2]);
}