#include <stdio.h>


int main()
{
    int A,B,C;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    if (A==0 || B==0 || C==0)
    {
        printf("Triangulo Invalido");
    }
    else if (A+B<=C || A+C<=B || C+B<=A)
    {
        printf("Triangulo Invalido");
    }
    
    else 
    {
        printf("Triangulo Valido");
    }

    return 0;
   }  