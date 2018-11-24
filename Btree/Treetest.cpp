#include "Treetest.h"

Treetest::Treetest()
{

}
void Treetest::Testtree()
{
    objeto=new tree;
    Item *aux = nullptr ,*auxbusc = nullptr;
    int choose;
    std::string buscabar="";
    do
    {
        puts("< - Digite a opção que desejada - >");
        puts("1 - INSERIR ");
        puts("2 - RETIRAR ");
        puts("3 - CONSULTAR ");
        puts("0 - SAIR ");
        printf("You choose [  ]\b\b\b");
        std::cin>>choose;

        switch (choose) {
        case 1://INSERIR

            aux=criaitem();
            if(objeto->inserir(aux))
            {
                puts("Sucesso!!");
            }
            else
            {
                puts("Inssucesso");
            }

            break;

        case 2://RETIRAR

            puts("Digite o codigo de barras que desejas remover : ");
            std::cin.ignore();
            std::getline(std::cin,buscabar);
            auxbusc->setcodbarras(buscabar);

            if(objeto->consultar(auxbusc)!=nullptr)
            {
                puts("REMOVIDO COM SUCESSO !!!");
                std::cout<<objeto->retirar(auxbusc)->gettudo();
            }
            else
            {
                puts("Not found!!");
            }

            break;

        case 3://CONSULTAR

            puts("Digite o codigo de barras que desejas encontrar : ");
            std::cin.ignore();
            std::getline(std::cin,buscabar);
            auxbusc->setcodbarras(buscabar);
            if(objeto->consultar(auxbusc)!=nullptr)
            {
                puts("Founded !!!");
                std::cout<<objeto->consultar(auxbusc)->gettudo();
            }
            else
            {
                puts("Not found!!");
            }

            break;

        default:
            break;
        }
    }while(choose!=0);

}

Item* Treetest::criaitem()
{
    Item *retorna=new Item;
    std::string nomeprod,codbarras;
    int quanti;
    double valor;

    puts("Digite o nome do produto : " );
    std::cin.ignore();
    std::getline(std::cin,nomeprod);
    retorna->setnomeprod(nomeprod);

    puts("Digite o numero do código de barras : " );
    //std::cin.ignore();
    std::getline(std::cin,codbarras);
    retorna->setcodbarras(codbarras);

    puts("Digite a quantidade : ");
    std::cin>>quanti;
    retorna->setquanti(quanti);

    puts("Digite o preço do produto : ");
    std::cin.ignore();
    std::cin>>valor;
    retorna->setpreco(valor);

    return retorna;

}
