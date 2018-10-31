#ifndef TREE_H
#define TREE_H
#include "No.h"

class tree
{
private:
    No *raiz;
public:
    tree();
    bool inserir(Item*);
    Item* retirar(Item*);
    Item* consultar(Item*);
    std::string mostrarordem();
    std::string mostrarposordem();
    std::string mostrarpreordem();
    bool vazia();
    No* minima(No*);
    No* maximo(No*);
    No* antecessor(No*);
    No* sucessor(No*);

};

#endif // TREE_H
