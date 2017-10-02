#include "widget.h"
#include "cradar.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    CRadar* radar = new CRadar(this);
    radar->setFixedSize(200,300);
    radar->move(50,50);
}

Widget::~Widget()
{

}
