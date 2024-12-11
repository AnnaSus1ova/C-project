#include "wrong_input.h"
#include "ui_wrong_input.h"

WrongInput::WrongInput(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WrongInput)
{
    ui->setupUi(this);
}

WrongInput::~WrongInput()
{
    delete ui;
}
