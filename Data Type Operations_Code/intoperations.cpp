#include "intoperations.h"

IntOperations::IntOperations()
{
}

QVariant IntOperations::addition(QVariant x, QVariant y)
{
    int num1 = x.toInt();   //convertQVaraint to Int
    int num2 = y.toInt();
    int sum = num1 + num2;
    //convert sum to QVariant
    QVariant v(sum);
    return v;
}

QVariant IntOperations::subtraction(QVariant x, QVariant y)
{
    int num1 = x.toInt();   //convertQVaraint to Int
    int num2 = y.toInt();
    int difference = num1 - num2;
    //convert sum to QVariant
    QVariant v(difference);
    return v;
}
