//
//  main.c
//  carga
//
//  Created by Rafael Queiroz on 07/05/2022.
//

#include <stdio.h>
#include <stdlib.h>
int main (){
    int cestado, ccarga, peso = 0 ;
    float preco, imposto, precototal ;
    
    printf ("Informe o código do estado de origem (de 1 a 4)\n");
    scanf ("%d", &cestado);
    if (cestado < 1 || cestado > 4)
    {
        printf ("Código do estado inválido.\n");
    }
    
    printf ("Informe o código de carga (de 10 a 40):\n");
    scanf("%d", &ccarga);
    if (ccarga < 10 || ccarga > 40)
    {
        printf ("Código de carga inválido \n");
    }
    
    switch (cestado) {
        case 1:
            peso = 20 ;
            break;
        case 2:
            peso = 15;
            break;
        case 3:
            peso = 10;
            break;
        case 4:
            peso = 5;
            break;
        default:
            printf ("Código de estado inválido\n");
            break;
    }
        if (ccarga >= 10 && ccarga <= 20)
        {
            peso = peso*1000;
            preco = (180*peso);
            imposto = preco * 0.18;
            precototal = preco + imposto;
            printf ("O peso da carga é de %d kg\n", peso);
            printf ("O preço da carga é de: R$ %.2f \n", preco);
            printf ("O valor pago em ICMS é de: R$ %.2f \n",imposto);
            printf ("O valor total da carga é de: R$ %.2f \n", precototal);
        }
    else if (ccarga >20 && ccarga <= 30)
    {
        peso = peso*1000;
        preco = (120*peso);
        imposto = preco * 0.18;
        precototal = preco + imposto;
        printf ("O peso da carga é de %d kg\n", peso);
        printf ("O preço da carga é de: R$ %.2f \n", preco);
        printf ("O valor pago em ICMS é de: R$ %.2f \n",imposto);
        printf ("O valor total da carga é de: R$ %.2f \n", precototal);
    }
    else if (ccarga > 30 && ccarga <= 40)
    {
        peso = peso*1000;
        preco = (230*peso);
        imposto = preco * 0.18;
        precototal = preco + imposto;
        printf ("O peso da carga é de %d kg\n", peso);
        printf ("O preço da carga é de: R$ %.2f \n", preco);
        printf ("O valor pago em ICMS é de: R$ %.2f \n",imposto);
        printf ("O valor total da carga é de: R$ %.2f \n", precototal);
    }
    return 0;
}
