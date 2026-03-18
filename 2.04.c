#include <stdio.h>

int main()
{
    int n1,n2,n3,maior;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    if (n1==n2)
    {
        printf("Ha numeros iguais");
        return 0;
    }
    
    else if (n1==n3)
    {
        printf("Ha numeros iguais");
        return 0;
    }
    
    else if (n2==n3)
    {
        printf("Ha numeros iguais");
        return 0;
    }
    
    else if (n1 >= n2 && n1>=n3)
    {
        maior = n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        maior = n2;

    }
    else
    {
        maior = n3;
    }   

    printf("%d\n", maior);
    return 0;

}