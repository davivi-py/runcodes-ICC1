#include <stdio.h>


int main()
{
    int D,E,F;
    scanf("%d %d %d", &D, &E, &F);

    if (D == 0)
    {
        printf("frente");
        return 0;
    }

    else if (D == 1 && E == 0 && F == 1)
    {
        printf("esquerda");
        return 0;
    }

    else if (D == 1 && E == 1 && F == 0)
    {
        printf("direita");
        return 0;
    }

    else if (D == 1 && E == 0 && F == 0)
    {
        printf("direita");
        return 0;
    }

    else if (E == 1 && D == 1 && F == 1)
    {
        printf("direita");
        return 0;
    }

    return 0;

}