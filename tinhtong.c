#include <stdio.h>
int main () {
     int sum=0;
     int n;
     for (int i=1; i <= 5; i++) {
         printf("Enter a number: ");
         scanf("%d",&n);
         if (n < 0) {
             continue;
         }
         sum += n;
     }
    printf("tong cua 5 so la: sum = %d\n",sum);
}

