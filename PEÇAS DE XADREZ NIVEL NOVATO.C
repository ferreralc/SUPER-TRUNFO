#include <stdio.h>

int main(){

    int numero;

    printf("!SIMULADOR DE PEÇAS DE XADREZ!\n");
        printf("1- Torre\n");
        printf("2- Bispo\n");
        printf("3- Rainha\n");
        
            printf("Escolha a peça a ser simulada\n");
            scanf("%d", &numero);


   
        if (numero == 1)
        {   
            int i = 0;
            while (i <5){
           printf(" %dx - Direita |", i + 1);
           i ++;
        }
        printf("\n")  ;  
        printf("|Andou 5 casas em linha reta a direita!\n|");
        
        
        }

        if (numero == 2)
        {
            int i = 0;
            while (i < 5)
            {
                printf(" %dx - Cima e Direita |", i + 1);
                i ++;
            }

           
            printf("\n")  ;  
            printf("|Andou 5 casas em linha diagonal para cima e para a direita!\n");

        }
        
        if (numero == 3)
        {
            int i = 0;
            while (i < 8)
            {
                printf(" %dx - Esquerda |", i + 1);
                i ++;
            }
            
        }
            printf("\n")  ;  
            printf("|Andou 8 casas em linha reta para esquerda!\n");

    




return 0;











}
