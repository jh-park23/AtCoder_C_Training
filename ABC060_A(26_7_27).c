#include<stdio.h>

int main()
{
    char A[11], B[11], C[11];
    scanf("%s %s %s", A,B,C);

    int i=0;
    while(A[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(B[j]!='\0')
    {
        j++;
    }

    if(A[i-1]==B[0]&&B[j-1]==C[0])
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}