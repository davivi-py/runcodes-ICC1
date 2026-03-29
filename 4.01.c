#include <stdio.h>

int main()
{
    int IA,IB,FA,FB;
    scanf("%d %d %d %d", &IA, &IB, &FA, &FB);

    if (IA != FA && IB == FB){
        printf("1");
    }

    else if (IA == FA && IB != FB)
    {
        printf("2");
    }
    
    else if (IA != FA && IB != FB)
    {
        printf("1");
    }

    else
    {
        printf("0");
    }

    return 0;
}