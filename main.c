#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct
{
    char nome[30];
    char telefone[30];

} contato;

int main()
{
    contato amigo[50];
    int i,j,opcao,flag, novoTelefone,comparador,opcao2;
    char telefone[30];
    char resposta='s';
    char continua='s';
    i=0;
    j=0;


    while(resposta=='s')
    {


        printf("\nDigite uma das opcoes da lista telefonica:\n\n 0- Inserir um contato\n 1- visualisar todos os contatos\n 2-Alterar nome ou numero\n 3-Sair\n\n");
        scanf("%d",&opcao);
        getchar();

        switch(opcao)
        {
        case 0:
            printf("Digite o Nome:\n");
            scanf("%s", amigo[i].nome);
            getchar();
            printf("Digite o numero:\n");
            scanf("%s",amigo[i].telefone);
            getchar();
            i++;
            system("cls");
            break;

        case 1:
            for (j=0;j<i;j++)
            {
                printf("\nNome: %s ---- Telefone:%s \n",amigo[j].nome, amigo[j].telefone);
            }
            break;

        case 2:

            flag=0;
            while(flag!=1)

            {
                printf("\nDigite o numero de telefone:\n");
                scanf("%s", telefone);
                getchar();

                for (j=0;j<=i;j++)
                {
                    comparador= strcmp(telefone,amigo[j].telefone);
                    if (comparador==0)
                    {
                        flag=1;
                        break;
                    }

                }
                if (flag==1)
                {
                        printf("\nDigite uma opcao:\n0-Trocar nome; 1-Trocar numero de telefone\n");
                        scanf("%d",&opcao2);
                        switch(opcao2)
                        {
                        case 0:
                            printf("\nDigite o novo nome:\n");
                            scanf("%s",amigo[j].nome);
                            flag=1;
                            j=i+1;
                            break;
                        case 1:
                            printf("\nDigite o novo numero de telefone:\n");
                            scanf("%s",amigo[j].telefone);
                            flag=1;
                            j=i+1;
                            break;
                        default:
                            printf("\nNenhuma das opcoes escolhidas, retornando ao menu principal\n");
                        }

                }
                else
                {
                    printf("Numero nao encontrado deseja continuar?(s/n)");
                    continua=_getch();
                    if (continua=='n')
                    {
                        flag=1;
                    }

                }
            }

            system("cls");
            break;

        default:

            printf("\nEncerrando o programa...\n");
            resposta='n';



        }



    }
    system("pause");
    return 0;
}
