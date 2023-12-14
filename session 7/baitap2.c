#include<stdio.h>

int main()
{
    int a, b, c,  i;
    int j = 0;
    int d[5];
    for(i = 100; i < 999; i++)
    {
        a = i/100;
        b = (i - a*100)/10;
        c = (i - a*100 - b*10);
        if(a*a*a + b*b*b + c*c*c == i)
        {
            d[j] = i;
            j++;
        }
    }
    printf("\nBang Cac So ");
    for(i = 0; i < j; i++)printf("\n %d", d[i]);
    return 0;
}