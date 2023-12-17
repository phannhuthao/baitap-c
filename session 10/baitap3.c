#include <stdio.h>
int  palindrome(int n){
    int sum=0;
    int  temp;
    int ss=n;
    while (n!=0){
        temp=n%10;
        sum=(sum*10)+temp;
        n/=10;
    }
    return ss==sum;
}
int main() {

    int a;
    printf("nhap so nguyen de kiem tra co phai  palindrome hay khong :");
    scanf("%d", &a);

    printf("\nOUTPUT:\n");
    if ( palindrome(a)) {
        printf(" %d Dung: day la so palindrome ", a);
    } else {
        printf("%d Sai: khong la so palindrome ", a);
    }
    return 0;
}