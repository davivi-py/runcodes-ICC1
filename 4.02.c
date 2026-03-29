#include <stdio.h>

int main()
{
    int t, pontuacao;
    scanf("%d", &t);

    for (int i = 0; i<t ; i++)
    {
        scanf("%d", &pontuacao);
        if (pontuacao >= 1900)
        {
            printf("Divisao 1\n");
        }
        else if (1600 <= pontuacao && pontuacao <= 1899)
        {
            printf("Divisao 2\n");
        }
        else if ( 1400 <= pontuacao && pontuacao <= 1599)
        {
            printf("Divisao 3\n");
        }
        else
        {
            printf("Divisao 4\n");
        }
        
    }
    return 0;
}