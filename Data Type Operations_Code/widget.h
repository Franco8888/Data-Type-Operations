#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "intoperations.h"
#include "stringlistoperations.h"
#include "stringoperations.h"
#include <QMessageBox>
#include "client.h"
#include "operations.h"
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    Client* pClient;
    Operations* pOperation;
};

#endif // WIDGET_H
