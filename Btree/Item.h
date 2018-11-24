#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>


class Item
{
private:
    std::string nomeprod,codbarras;
    int quanti;
    double valor;

public:
    Item();
    int getquanti();
    void setquanti(int);
    double getpreco();
    void setpreco(double);
    std::string getnomeprod();
    std::string getcodbarras();
    void setcodbarras(std::string);
    void setnomeprod(std::string);
    std::string gettudo();
};

#endif // ITEM_H
