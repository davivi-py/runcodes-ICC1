#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a == 0 || b == 0 || c == 0)
    {
        printf("0\n");
        return 0;
    }

    else if( (a + b) <= c || (a + c) <= b || (b +c) <= a)
    {
        printf("0\n");
        return 0;
    }

    else if (a == b && b == c)
    {
        printf("3\n");
        return 0;

    }

    else if (a == b || b == c || a == c)
    {
        printf("2\n");
        return 0;
    }

    else
    {
        printf("1\n");
        return 0;
    }

    

}