#include "client.h"

Client::Client(QVariant type)
{
    //call create function  of factory which creates an obejct
    //based on type
    qDebug() << "entered client's create function";
    pOperation = FactoryOperations::create(type);
}

Client::~Client()
{
    delete[] pOperation;
    pOperation = NULL;
}

Operations* Client::getPOperation()
{
    return pOperation;
}
