#ifndef SETTING_H
#define SETTING_H

#include <QWidget>
#include "ranklist.h"

namespace Ui {
class Setting;
}

class Setting : public QWidget
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();
    Ranklist* list;


private slots:

    void on_pushButton_clicked();

private:
    Ui::Setting *ui;
};

#endif // SETTING_H
