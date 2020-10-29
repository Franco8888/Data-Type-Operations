#ifndef STRINGLISTOPERATIONS_H
#define STRINGLISTOPERATIONS_H
#include "operations.h"
#include <QDebug>

class StringListOperations: public Operations
{
public:
    StringListOperations();
    QVariant addition(QVariant x, QVariant y);
    QVariant subtraction(QVariant x, QVariant y);
};

#endif // STRINGLISTOPERATIONS_H
