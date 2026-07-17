/*Problem Statement
AtCoDeer the deer recently bought three paint cans. The color of the one he bought two days ago is 
a, the color of the one he bought yesterday is 
b, and the color of the one he bought today is 
c. Here, the color of each paint can is represented by an integer between 
1 and 
100, inclusive.

Since he is forgetful, he might have bought more than one paint can in the same color. Count the number of different kinds of colors of these paint cans and tell him.

Constraints
1≦a,b,c≦100

*/
#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);
    
    if((a==b)&&(b==c))
    {
        printf("%d", 1);
    }
    else if((a==b)||(b==c)||(c==a))
    {
        printf("%d", 2);
    }
    else
        printf("%d",3);

   return 0;
}