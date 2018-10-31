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
    static No* montano(Item*);
    static Item* desmontano(No*);
};

#endif // NO_H
