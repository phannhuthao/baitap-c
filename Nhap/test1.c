#include <stdio.h>
#include <string.h>


int main () {

      // char a[] = "Hello cac ban", *p;
      // int i;
      //p = a;
     // printf("%d",strlen(a));
     //for (int i = 0; i < strlen(p); i++) {
     //  printf("array[%d] address: %d\n",i, p+1);
     //}


   // Truy xuat chuỗi con trỏ trong c
   // char *a = "Hello", *p;
    //p = a;
   // printf("%c\n",a[1]);
   // printf("%c\n",*p+2);
   // return 0;

   // ======= Nhập chuỗi con trỏ

   // char str[100];
    //scanf("%s", str);

   // char str[100], *p;
    //p = str;
   // printf("Moi nguoi dung nhap vao: ");
   // scanf("%s",p);

   // Nhap chuỗi thông qua con trỏ
   //char str[100], *p;
   //p = str;
   // printf("Nhap chuoi: ");
   // gets(p);
   // puts(p);
   // while (*p != '\0') {
   //     printf("%c", *p);
   //     p++;
   //}


   //===== Gán địa chỉ biến cho con trỏ
//int num[3] = {1,2,3}, *p;
//p = num;

  // char a = 'M', *p1;
   //p1 = &a;


  // int num[] = {10,20,30,40}, *p;
   //p = num;
   // printf("array[0] address: %d\n", p);//Địa chỉ phần tử đầu tiên
    //printf("array[1] address: %d\n", p +1);//Địa chỉ phần tử thứ ha
    //printf("array[3] address: %d\n", p +3);//Địa chỉ phần tử thứ tư
   // return 0;

    //printf("Nhap num[0] = ");
    //scanf("%d",p);

    //printf("Nhap num[1] = ");
    //scanf("%d",p);

    //printf("Nhap num[2] = ");
    //scanf("%d",p);

    //printf("Num[0] = %d\n",num[0]);
    //printf("Num[1] = %d\n",num[1]);
    //printf("Num[2] = %d\n",num[2]);

    void input_array(int *array,int length) {
        for (short i =0; i < length; i++) {
            printf("Nhap array[%d] = ", i);
            scanf("%d", (array + i));
        }
    }


}