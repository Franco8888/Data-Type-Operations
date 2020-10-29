#ifndef FACTORYOPERATIONS_H
#define FACTORYOPERATIONS_H

#include "intoperations.h"
#include "stringoperations.h"
#include "stringlistoperations.h"
#include "operations.h"

class FactoryOperations
{
public:
    FactoryOperations();

    //create the operation based on type
    static Operations* create(QVariant type);
};

#endif // FACTORYOPERATIONS_H
