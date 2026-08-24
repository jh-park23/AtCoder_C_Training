#include<stdio.h>

int num_sound(const int *a, const int *b, const int *c)
{
    if(*a * *c <= *b)
    {
        return *c;
    }
    else
    {
        return *b / *a;
    }
}

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    printf("%d", num_sound(&A, &B, &C));

    return 0;
}