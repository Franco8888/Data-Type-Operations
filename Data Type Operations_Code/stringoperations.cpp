#include "stringoperations.h"

StringOperations::StringOperations()
{
}

QVariant StringOperations::addition(QVariant x, QVariant y)
{
    QString str1 = x.toString();
    QString str2 = y.toString();

    QString sum;
    sum.append(str1);
    sum.append(str2);

    QVariant v(sum);    //convert string to QVariant

    return  v;
}

QVariant StringOperations::subtraction(QVariant x, QVariant y)
{
    QString str1 = x.toString();
    QString str2 = y.toString();

    str1.remove(str2);  //remove all occurences of str2 from str1

    QVariant v(str1);    //convert string to QVariant

    return  v;
}
