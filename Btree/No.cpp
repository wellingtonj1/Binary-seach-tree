#include "No.h"

No::No()
{

}
Item* No::getdados()
{
    return dados;
}

No* No::getpai()
{
    return pai;
}

No* No::getfe()
{
    return fe;
}

No* No::getfd()
{
    return fd;
}

No* No::montano(Item *aux)
{
    No *ptr=new No;
    ptr->dados=aux;
    ptr->pai=0;
    ptr->fe=0;
    ptr->fd=0;

    return ptr;
}

Item* No::desmontano(No* aux)
{
    Item *ptr=aux->dados;
    delete aux;
    aux=0;
    return ptr;
}

