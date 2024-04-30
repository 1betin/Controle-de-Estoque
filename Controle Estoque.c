#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int resposta, quantidade, qual, rquantidade, aqual;
char comecar;

int main()
{

    struct estoque
    {
        int chamex, report, executive;
        
    };
    
    struct estoque caixa;

    printf ("Antes de comecar, informe os itens do estoque: \n");

    printf ("Quantos chamex? ");
    scanf ("%d", &caixa.chamex);
    printf ("\nQuantos reports? ");
    scanf ("%d", &caixa.report);
    printf ("\nQuantos executives? ");
    scanf ("%d", &caixa.executive);

    if (caixa.chamex < 0 || caixa.report < 0 || caixa.executive < 0 ){

        printf ("Numero informado invalido.\n");
        system ("pause");
        return (0);

    }
    else{


    }

    system ("cls");

    do{

    printf ("O que voce deseja realizar? \n1- Adicionar item \n2- Remover item\n3- Sair\n");
    scanf ("%d", &resposta);

        switch (resposta){

        case 1 :
            printf ("Quantas caixas voce quer adicionar?\n");
            scanf ("%d", &quantidade);
            
            printf ("Qual voce quer adicionar?  \n1- Chamex \n2- Report \n3- Executive\n");
            scanf ("%d", &qual);

            if (qual == 1){

                caixa.chamex = caixa.chamex + quantidade;

            }
            else if (qual == 2){

                caixa.report = caixa.report + quantidade;

            }
            else if (qual == 3){

                caixa.executive = caixa.executive + quantidade;
            }
            else{

                printf ("Nao existe escolha para o numero informado!\n");
                system ("pause");
                return (0);

            }
        break;
    
        case 2 :

            printf ("Quantas caixas voce quer retirar?\n");
            scanf ("%d", &rquantidade);
            
            printf ("Qual voce quer retirar? \n1- Chamex \n2- Report \n3- Executive\n");
            scanf ("%d", &aqual);

            if (aqual == 1){

                caixa.chamex = caixa.chamex - rquantidade;

            }
            else if (aqual == 2){

                caixa.report = caixa.report - rquantidade;

            }            
            else if (aqual == 3){

                caixa.executive = caixa.executive - rquantidade;
            }
            else{

                printf ("Nao existe escolha para o numero informado!\n");
                system ("pause");
                return (0);
            }
        break;

            

        case 3 :

        break;
        
        default :

            printf ("Nao existe escolha para o numero informado!\n");
            system ("pause");
            return (0);
        break;
        }
        
        
        system ("cls");
    }while (resposta != 3);

    printf ("Sobraram: \nChamex: %d \nReport: %d \nExecutive: %d\n", caixa.chamex, caixa.report, caixa.executive);
    system ("pause");

}