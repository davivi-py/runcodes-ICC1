#include <stdio.h>


int main()
{
    int baixa = 0, alta = 0, total = 0;
    float nota, soma = 0;

    while (scanf("%f", &nota) && nota >= 0)
    {
        if (nota >= 5.0)
        {
            alta++;
            soma += nota;
        }
        else if (nota < 5.0 )
        {
            baixa++;
            soma += nota;
        }
        
    }
    
    total = baixa + alta;

    printf("%d\n", baixa);
    printf("%d\n", alta);
    printf("%.2f\n", (soma / total));
    printf("%.1f%%\n", (float) alta / total*100);

    return 0; 
}
    

  