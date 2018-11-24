#ifndef NO_H
#define NO_H
#include "Item.h"

class No
{
private:
    No *pai,*fe,*fd;
    Item *dados;

public:
    No();
    Item* getdados();
    No* getpai();
    No* getfe();
    No* getfd();
    void setpai(No *x){ pai=x; }
    void setfe(No *x){ fe=x; }
    void setfd(No *x){ fd=x; }
    void setdados(Item *aux){ dados=aux; }
    static No* montano(Item*);
    static Item* desmontano(No*);
};

#endif // NO_H
