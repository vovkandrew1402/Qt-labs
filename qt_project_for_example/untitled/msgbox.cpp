#include "msgbox.h"

MsgBox::MsgBox(QWidget *parent):QTextBrowser(parent){}

void MsgBox::log_msg(QString msg)
{
    setTextColor(Qt::black);
    append(msg);
}
void MsgBox::err_msg(QString err_msg)
{
    setTextColor(Qt::red);
    append(err_msg);
}
void MsgBox::log_clear()
{
    clear();
}
