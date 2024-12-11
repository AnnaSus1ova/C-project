#ifndef WRONG_INPUT_H
#define WRONG_INPUT_H

#include <QDialog>

namespace Ui {
class WrongInput;
}

class WrongInput : public QDialog
{
    Q_OBJECT

public:
    explicit WrongInput(QWidget *parent = nullptr);
    ~WrongInput();

private:
    Ui::WrongInput *ui;
};

#endif // WRONG_INPUT_H
