#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float maior, menor, total, atual;
    int i;

    menor = FLT_MAX;

    for(i=0; i<15; i++)
    {
        printf("\nInforme o %d� pre�o: R$ ", i+1);
        scanf("%f", &atual);

        if(atual > maior)
            maior = atual;

        if(atual < menor)
            menor = atual;

        total+=atual;
    }

    //Imprimindo os resultados
    printf("\nO maior pre�o encontrado foi: R$ %.2f", maior);
    printf("\nO menor pre�o encontrado foi: R$ %.2f", menor);
    printf("\nA media de pre�o encontrada foi: R$ %.2f", total/15);

    getch();

    return 0;
}
