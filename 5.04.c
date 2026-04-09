#include <stdio.h>


int main()
{
    int ano_ini,ano_fim;
    scanf("%d %d", &ano_ini, &ano_fim);

    for(int i = ano_ini; i <= ano_fim; i++)
        if (i%4==0 && i%100!=0 || i%400==0)
        {
            printf("%d\n", i);
        }
      
    return 0;
}