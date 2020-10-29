#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString dataType = ui->lineEditDataType->text();    //get data type

    qDebug() << "dataType:" << dataType;
    //get which operation to perform(+ or -)
    QString operation = ui->lineEditoperation->text();
    QVariant type;  //holds data type(int, string, stringList)

    //operands
    QVariant vOperand1;
    QVariant vOperand2;

    //get operands
    QString ope1 = ui->lineEditOperand1->text();
    QString ope2 = ui->lineEditOperand2->text();
    //turn them into QVariant

    //select which operation will take place depedning on dataType
    //then create QVariant of taht type to pass to client
    if(dataType == "int")
    {
        //turn operants into QVariant holding int
        vOperand1 = ope1.toInt();
        vOperand2 = ope2.toInt();

        //set type variant to int type
        type = vOperand1;  //since b1 holds an int type will be of type int
    }
    else if(dataType == "string")
    {
        qDebug() << "in string part in type selection in widget";
        //turn operants into QVariant holding string
        vOperand1 = ope1;
        vOperand2 = ope2;

        type = vOperand1;  //set type to string type
    }
    else if(dataType == "stringList")
    {
        //turns operants into QVariant holding stringList
        QStringList l1;
        QStringList l2;
        l1 = ope1.split(',');
        l2 = ope2.split(',');
        vOperand1 = l1;
        vOperand2 = l2;

        type = vOperand1;  //set type to stringList type
    }
    else
    {
        QMessageBox::warning(this, "Data Types", "Non valid data type selected\nRe-select");
    }

    QString string1 = vOperand1.toString();
    QString string2 = vOperand2.toString();

    qDebug() << "string1:" << string1;
    qDebug() << "string2:" << string2;

    qDebug() << "QVariant's type" << type;

    //create Client with appropiate type
    pClient = new Client(type);

    pOperation = pClient->getPOperation();  //now pOperation
    //point to certain data operation (int, string or stringList)
    //in otherwords to a child

    qDebug() << "here1";

    QVariant sum;
    QVariant dif;

    if(operation == "+")
    {
        sum = pOperation->addition(vOperand1,vOperand2);
    }
    else if(operation == "-")
    {
        dif = pOperation->subtraction(vOperand1,vOperand2);
    }
    else
    {
        QMessageBox::warning(this, "Operation", "Non valid operation selected\nRe-select + or -");
    }

    qDebug() << "here2";
    QString sumStr, difStr;

    //convert types to QString
    QString sumType = sum.typeName();
    QString difType = dif.typeName();

    if(sumType == "int" || difType == "QString" || difType == "int" || sumType == "QString")
    {
        if(operation == "+")
        {
            sumStr = sum.toString();
            qDebug() << "Sum:" << sumStr;
            ui->lineEditResult->setText(sumStr);
        }
        else
        {
            difStr = dif.toString();
            qDebug() << "dif:" << difStr;
            ui->lineEditResult->setText(difStr);
        }
    }
    else    //else do the QStringList
    {
        qDebug() << "here3";
        QStringList sumList;
        QStringList difList;
        if(operation == "+")
        {
            sumList = sum.toStringList();
            for(int i = 0; i<sumList.length();i++)
            {
                sumStr.append(sumList[i]);
                if(i!=(sumList.length()-1)) //not putting comma at the end
                {
                    sumStr.append(",");
                }

            }
            qDebug() << "SumStr:" << sumStr;
            ui->lineEditResult->setText(sumStr);
        }
        else
        {
            qDebug() << "here4";
            difList = dif.toStringList();
            for(int i = 0;i< difList.length();i++)
            {
                difStr.append(difList[i]);
                if(i!=(difList.length()-1)) //not putting comma at the end
                {
                    difStr.append(",");
                }
            }
            qDebug() << "dif:" << difStr;
            ui->lineEditResult->setText(difStr);
        }
    }

}
