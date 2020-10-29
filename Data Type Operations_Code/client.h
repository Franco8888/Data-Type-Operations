#ifndef CLIENT_H
#define CLIENT_H

#include "operations.h"
#include "factoryoperations.h"
#include <QDebug>

//passes type to Factoiry to decide which operation to do
class Client
{
public:
    Client(QVariant type);
    ~Client();

    Operations* getPOperation();

private:
    //pointer to parent class
    Operations* pOperation;
};

#endif // CLIENT_H
