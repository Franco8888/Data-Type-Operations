#include "stringlistoperations.h"

StringListOperations::StringListOperations()
{
}

QVariant StringListOperations::addition(QVariant x, QVariant y)
{
    QStringList l1 = x.toStringList();
    QStringList l2 = y.toStringList();


    for(int i = 0; i<l2.length(); i++)
    {
        l1.append(l2[i]);
    }

    l1.removeDuplicates();  //remove the duplicates

    QVariant v(l1);

    return v;
}

QVariant StringListOperations::subtraction(QVariant x, QVariant y)
{
    QStringList l1 = x.toStringList();
    QStringList l2 = y.toStringList();

    //loop through 1st list and if
    for(int i = 0; i<l1.length(); i++)
    {
        QString l1_element = l1[i];
        //another loop to see if element of l1 is in l2
        for(int j = 0; j<l2.length(); j++)
        {
            QString l2_element = l2[j];
            if(l1_element == l2_element)    //if elements match
            {
                l1.removeAt(i);
            }
        }
    }

    QVariant v(l1);

    return v;
}
