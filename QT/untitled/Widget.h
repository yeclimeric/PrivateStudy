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
    ~Widget();

    void showEvent(QShowEvent* e);
    bool event(QEvent *event);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
