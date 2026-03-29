#include <stdio.h>

int main()
{
    int c,h;
    scanf("%d %d", &c, &h);

    if (c > 5 || c < 1)
    {
        printf("Codigo de veiculo invalido");
    }

    else if (c == 1 && h > 5)
    {
        printf("Total: R$ %.2f\n", (2.0*h*0.9));
    }

    else if (c == 1)
    {
        printf("Total: R$ %.2f\n", (2.0*h));
    }
    
    else if (c == 2 && h > 5)
    {
        printf("Total: R$ %.2f\n", (5.0*h*0.9));
    }

    else if (c == 2)
    {
        printf("Total: R$ %.2f\n", (5.0*h));
    }

    else if (c == 3 && h > 5)
    {
        printf("Total: R$ %.2f\n", (8.0*h*0.9));
    }

    else if (c == 3)
    {
        printf("Total: R$ %.2f\n", (8.0*h));
    }


    else if (c == 4 && h > 5)
    {
        printf("Total: R$ %.2f\n", (10.0*h*0.9));
    }

    else if (c == 4)
    {
        printf("Total: R$ %.2f\n", (10.0*h));
    }
    
    else if (c == 5 && h > 5)
    {
        printf("Total: R$ %.2f\n", (15.0*h*0.9));
    }
    else
    {
        printf("Total: R$ %.2f\n", (15.0*h));
    }
    return 0;
}