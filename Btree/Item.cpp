#include "Item.h"

Item::Item()
{
    quanti=0;
    valor=0;
    nomeprod=codbarras="";
}

int Item::getquanti()
{
    return quanti;
}

void Item::setquanti(int x)
{
    quanti=x;
}

double Item::getpreco()
{

    return valor;
}

void Item::setpreco(double x)
{  
    valor=x;
}

std::string Item::getnomeprod()
{
    return nomeprod;
}

void Item::setnomeprod(std::string x)
{
    nomeprod=x;
}

std::string Item::gettudo()
{
    std::string aux;
    aux="Nome produto "+nomeprod+"\nCodigo de barras "+codbarras+"\nPreço "+std::to_string(valor)+"\nQuantidade "+std::to_string(getquanti())+"\n";
    return aux;
}
std::string Item::getcodbarras()
{
    return codbarras;
}

void Item::setcodbarras(std::string x)
{
    codbarras=x;
}
