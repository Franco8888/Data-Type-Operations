#include "factoryoperations.h"
#include <QDebug>

FactoryOperations::FactoryOperations()
{
}

Operations *FactoryOperations::create(QVariant type)
{
    qDebug() << "entered Factories create function";
    QString t = type.typeName();    //convert type to QString
    if(t == "int")
    {
        qDebug() << "int operations was selected";
        return new IntOperations();
    }
    else if(t == "QString")
    {
        qDebug() << "string operations was selected";
        return new StringOperations();
    }
    else if(t == "QStringList")
    {
        qDebug() << "stringList operations was selected";
        return new StringListOperations();
    }
    else
    {
        return NULL;
    }
}
