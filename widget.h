#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);

    void shaixianxia1_time_end(int T);

    void kaishi();


    ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
