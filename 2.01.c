#include <stdio.h>

int main()
{
    int n1,n2,maior;
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1>n2)
    {
        maior = n1;
        printf("%d\n", maior);
    }
    
    else if (n1==n2)
    {
        printf("igual");
    }
    

    else
    {
        maior = n2;
        printf("%d\n", maior);

    }
    return 0;
}