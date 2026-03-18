#include <stdio.h>

int main()
{
    float D,L,A;
    scanf("%f",&D);
    scanf("%f",&L);

    A = D / L;

    if( A < 8)
    {
        printf("Venda o carro!");
    }

    else if (8<=A && A <=12)
    {
        printf("Economico!");
    }

    else
    {
        printf("Super economico!");
    }

    return 0;
}