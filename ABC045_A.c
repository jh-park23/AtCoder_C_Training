#include<stdio.h>
int main()
{
    int a,b,h,s=0;

    scanf("%d %d %d", &a, &b, &h);
    s= ((a+b)*h)/2;

    printf("%d", s);

    return 0;
}