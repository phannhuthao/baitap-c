#include <stdio.h>
#include <string.h>
int main (void)
{
    printf("nhap chuoi ki tu: ");
    char str[100];
    scanf("%s",str);
    int len =  strlen(str);
    printf("do dai chuoi ki tu: %d",len);

}
