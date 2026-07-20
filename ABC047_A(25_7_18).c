/*Problem Statement
Two students of AtCoder Kindergarten are fighting over candy packs.

There are three candy packs, each of which contains 
a, b, and c candies, respectively.

Teacher Evi is trying to distribute the packs between the two students so that each student 
gets the same number of candies. Determine whether it is possible.

Note that Evi cannot take candies out of the packs, and the whole contents of each pack 
must be given to one of the students.

Constraints
1≦a,b,c≦100
*/

#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if((a+b==c)||(a+c==b)||(b+c==a))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}