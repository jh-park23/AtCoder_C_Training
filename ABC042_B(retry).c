#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a, const void *b) 
// The comparison function must use const pointers.
{
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int N, L;
    scanf("%d %d", &N, &L);

    char S[100][101];

    for(int i = 0; i < N; i++)
    {
        scanf("%s", S[i]);
    }

    qsort(S, N, sizeof(S[0]), compare);

    for(int i = 0; i < N; i++)
    {
        printf("%s", S[i]);
    }

    return 0;
}