#include <stdio.h>
int main () {
    double doanhthubanhang, hoahong;
    printf("nhap doanh thu ban hang: ");
    scanf("%lf",&doanhthubanhang);
    if (doanhthubanhang <= 100) {
        hoahong = 0.05*doanhthubanhang;
        printf("hoa hong cua doanh nghiep ban hang la: %lf",hoahong);
    } else if (doanhthubanhang >= 100 && doanhthubanhang <= 300) {
        hoahong = 0.1*doanhthubanhang;
        printf("hoa hong cua doanh nghiep ban hang la:%lf\n",hoahong);
    } else if (doanhthubanhang > 300) {
        printf("hoa hong cua doanh nghiep ban hang: %lf\n",hoahong);
    }
    return 0;
}
