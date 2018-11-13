#include "Treetest.h"

Treetest::Treetest()
{

}
void Treetest::Testtree()
{

    int choose;
    do
    {
        puts("< - Digite a opção que desejada - >");
        puts("1 - INSERIR ");
        puts("2 - RETIRAR ");
        puts("3 - CONSULTAR ");
        puts("4 - MOSTRAR ");
        puts("0 - SAIR ");
        printf("You choose [  ]\b\b\b");
        std::cin>>choose;

        switch (choose) {
        case 1://INSERIR

            break;

        case 2://RETIRAR

            break;

        case 3://CONSULTAR

            break;

        case 4://MOSTRAR

            break;

        default:
            break;
        }
    }while(choose!=0);

}

