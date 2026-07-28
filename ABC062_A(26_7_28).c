#include<stdio.h>

int main()
{
    int s1[8]={1,3,5,7,8,10,12}, s2[5]={4,6,9,11}, s3[2]={2};
    int x, y;

    scanf("%d %d", &x, &y);

    int found1_x=0,found1_y=0;
    for(int i=0; i<7; i++)
    {
        if(s1[i]==x)
        {
            found1_x=1;
        }

        if(s1[i]==y)
        {
            found1_y=1;
        }
    }

    int found2_x=0,found2_y=0;
    for(int i=0; i<5; i++)
    {
        if(s2[i]==x)
        {
            found2_x=1;
        }

        if(s2[i]==y)
        {
            found2_y=1;
        }
    }

    if(found1_x==1&&found1_y==1)
    {
        printf("Yes");
    }
    else if(found2_x==1&&found2_y==1)
    {
        printf("Yes");
    }
    else
        printf("No");

    return 0;
}