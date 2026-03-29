#include <stdio.h>

int main()
{
    int a,b;
    char op;
    
    scanf("%d %d %c", &a, &b, &op);

    if (op == '+')
    {
        printf("%d", a+b);
        return 0;
    }
    else if (op == '-')
    {
        printf("%d", a-b);
        return 0;
    }
    else if (op == '*')
    {
        printf("%d", a*b);
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            printf("Erro: divisao por zero");
        }
        else
        {
            printf("%.2f", (float)a / b);
        }
    }
    else
    {
        printf("Erro: operacao invalida");
    }
    return 0;
}