#include <stdio.h>

int main()
{
    int nota, maior, menor;

    scanf("%d", &nota);

    maior = nota;

    menor = nota;

    while (scanf("%d", &nota) && nota >= 0)
    {   
        if (nota > maior)
        {
            maior = nota;
        }
        if (nota < menor)
        {
            menor = nota;
        }
     }


    printf("%d %d", maior, menor);
    return 0;
    
    }
    
