/*Problem Statement
Snuke is going to open a contest named "AtCoder 
s Contest". Here, s is a string of length 
1 or greater, where the first character is an uppercase English letter, 
and the second and subsequent characters are lowercase English letters.

Snuke has decided to abbreviate the name of the contest as "A
xC". Here, 
x is the uppercase English letter at the beginning of 
s.

Given the name of the contest, print the abbreviation of the name.

Constraints
The length of 
s is between 
1 and 
100, inclusive.
The first character in 
s is an uppercase English letter.
The second and subsequent characters in 
s are lowercase English letters.*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int idx =0;
    char s[100],result[100]={0,};
    scanf("%s", s);

    for(int i=0; s[i]!='\0'; i++)
    {
        if(isupper(s[i]))
        {
            result[idx++]=s[i];
        }
    }
    printf("%s",result);
    return 0;
}




