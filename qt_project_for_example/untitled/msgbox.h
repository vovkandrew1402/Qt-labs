#ifndef MSGBOX_H
#define MSGBOX_H

#include <QTextBrowser>
class MsgBox : public QTextBrowser
{
public:
    MsgBox();
    MsgBox(QWidget *parent);

signals:

public slots:
    void log_msg(QString msg);
    void err_msg(QString err_msg);
    void log_clear();
};


#endif // MSGBOX_H
