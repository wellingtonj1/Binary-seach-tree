#include "tree.h"

tree::tree()
{
    nulo=No::montano(0);
    raiz=nulo;
}
bool tree::inserir(Item* aux)
{
    Item *trab=consultar(aux);
    if(trab!=0)return false;
    int de;
    No *ptr=No::montano(aux);
    if(vazia())
    {
        raiz=ptr;
        ptr->setpai(nulo);
        ptr->setfe(nulo);
        ptr->setfd(nulo);
        return true;
    }
    No* atual=raiz;
    No* anterior=raiz;
    while (atual!=nulo)
    {
         if(ptr->getdados()->getcodbarras()<atual->getdados()->getcodbarras())
         {
             anterior=atual;
             atual=atual->getfe();
             de=0;
         }
         if(ptr->getdados()->getcodbarras()>atual->getdados()->getcodbarras())
         {
             anterior=atual;
             atual=atual->getfd();
             de=1;
         }
         ptr->setfe(nulo);
         ptr->setfd(nulo);
         ptr->setpai(anterior);
         if(de==0)
         {
             anterior->setfe(ptr);
         }
         if(de==1)
         {
             anterior->setfd(ptr);
         }
         return true;
    }
}

Item* tree::retirar(Item *aux)
{
    if(aux==0)
    {
        return 0;
    }
    No *ptr=raiz;
    while (ptr!=nulo)
    {
        if(aux->getcodbarras()<ptr->getdados()->getcodbarras())
        {
            ptr=ptr->getfe();
        }
        else
        {
            if(aux->getcodbarras()>ptr->getdados()->getcodbarras())
            {
                ptr=ptr->getfd();
            }
            else
            {
                break;
            }
        }
    }
    if(ptr==nulo)
    {
        return 0;
    }
    Item *obj=new Item;
    *obj=*ptr->getdados();
    No *y=nulo;
    No *x=nulo;
    if(ptr->getfd()==nulo || ptr->getfe()==nulo)
    {
        y=ptr;
    }
    else
    {
        y=sucessor(ptr);
    }
    if(y->getfe()!=nulo)
    {
        x=y->getfe();
    }
    else
    {
        x=y->getfd();
    }
    if(x!=nulo)
    {
        x->setpai(y->getpai());
    }
    if(y->getpai()==nulo)
    {
        raiz=nulo;
        if(x!=nulo)
        {
            x->setpai(nulo);
        }
    }
    else
    {
        if(y==y->getpai()->getfe())
        {
            y->getpai()->setfe(x);
        }
        else
        {
            y->getpai()->setfd(x);
        }
    }
    if(y!=ptr)
    {
        *ptr->getdados()=*y->getdados();
    }

    delete y;
    return obj;

}

Item* tree::consultar(Item* aux)
{
    if(aux==0)return 0;
    No* ptr =raiz;
    while (ptr!=nulo)
    {
        if(aux->getcodbarras()<ptr->getdados()->getcodbarras())
        {
            ptr=ptr->getfe();
        }
        else
        {
            if(aux->getcodbarras()>ptr->getdados()->getcodbarras())
            {
                ptr=ptr->getfd();
            }
            else
            {
                break;
            }
        }
    }
    if(ptr==nulo) return 0;
    Item* copia= new Item;
    *copia=*ptr->getdados();
    return copia;
}

std::string tree::mostrarordem()
{

}

std::string tree::mostrarposordem()
{

}

std::string tree::mostrarpreordem()
{

}

bool tree::vazia()
{
    return (raiz==nulo);
}

No* tree::minima(No *pno)
{
    No *aux=pno;
    while(aux->getfe()!=nulo)
    {
        aux=aux->getfe();
    }
    return aux;
}

No* tree::maximo(No *pno)
{
    No *aux=pno;
    while(aux->getfd()!=nulo)
    {
        aux=aux->getfd();
    }
    return aux;
}

No* tree::antecessor(No *pno)
{
    if(pno->getfe()!=nulo)
    {
        return maximo(pno->getfe());
    }
    No *aux=pno->getpai();
    while (aux!=nulo && pno==aux->getfe())
    {
        pno=aux;
        aux=aux->getpai();
    }
    return aux;
}

No* tree::sucessor(No *pno)
{
    if(pno->getfd()!=nulo)
    {
        return minima(pno->getfd());
    }
    No *aux=pno->getpai();
    while (aux!=nulo && pno==aux->getfd())
    {
        pno=aux;
        aux=aux->getpai();
    }
    return aux;
}
