#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Digite o valor de X= ");
    scanf("%d",&x);
    printf("Digite o valor de Y= ");
    scanf("%d",&y);

    if ((x == 0 ) && (y == 0))
    {
        printf("Voce acertou o meio perfeito do alvo!");
    }
    else
    {
        if ((x == 1 || x == -1)&&(y == 1 || y == -1))
        {
            printf("Voce acertou no alvo pequeno (10 pontos)");
        }
        else
        {
            if ((x >= 5 && x > 1 || x >= -5 && x < -1)&&(y >= 5 && y > 1 || y >= -5 && y < -1))
            {
                printf("Voce acertou no alvo medio (5 pontos)");
            }
            else
            {
                if ((x > 5 && x != 10 || x <= -5 && x != -10  )&&(y >= 5 && y != 10 || y <= -5 && y != -10))
                {
                    printf("Voce acertou o maior alvo (1 ponto)");
                }
                else
                {
                    if ((x >= 10 || x <= -10) && (y >= 10 || y <= -10))
                    {
                        printf("Voce errou o alvo...");
                    }
                }
            }
        }
    }
    return(0);

}
