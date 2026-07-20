/*Problem Statement
Iroha loves Haiku. Haiku is a short form of Japanese poetry. A Haiku consists of three phrases with 
5, 7 and 5 syllables, in this order.
To create a Haiku, Iroha has come up with three different phrases. These phrases have 
A, B and C syllables, respectively. Determine whether she can construct a Haiku by using each of the phrases once, in some order.*/

#include<stdio.h>
int main()
{
    int A=0, B=0, C=0, x=0, y=0;
    scanf("%d %d %d", &A, &B, &C);

    int num[3] ={A,B,C};

    for (int i=0; i<3; i++)
        if (num[i]== 5)
            x = x+1;

    for (int i=0; i<3; i++)
        if (num[i]== 7)
            y = y+1;

    if (x ==2 && y==1)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}