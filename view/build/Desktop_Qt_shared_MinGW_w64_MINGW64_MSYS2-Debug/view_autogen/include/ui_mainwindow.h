/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Graph4;
    QWidget *verticalWidget_6;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_3;
    QPlainTextEdit *Ordinate;
    QPushButton *Graph2;
    QPushButton *AddFile1;
    QPushButton *AddFile2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_4;
    QPlainTextEdit *Abscissa;
    QWidget *verticalWidget_5;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_2;
    QTextBrowser *ShowError;
    QPushButton *Graph3;
    QPushButton *Graph1;
    QPushButton *Error;
    QLineEdit *lineEdit;
    QLabel *picture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(945, 548);
        MainWindow->setMinimumSize(QSize(945, 548));
        MainWindow->setMaximumSize(QSize(945, 548));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Graph4 = new QPushButton(centralwidget);
        Graph4->setObjectName("Graph4");
        Graph4->setGeometry(QRect(30, 235, 291, 41));
        QFont font;
        font.setPointSize(14);
        Graph4->setFont(font);
        Graph4->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225)"));
        verticalWidget_6 = new QWidget(centralwidget);
        verticalWidget_6->setObjectName("verticalWidget_6");
        verticalWidget_6->setGeometry(QRect(340, 285, 561, 181));
        verticalWidget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_7 = new QVBoxLayout(verticalWidget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        lineEdit_3 = new QLineEdit(verticalWidget_6);
        lineEdit_3->setObjectName("lineEdit_3");
        QFont font1;
        font1.setPointSize(11);
        lineEdit_3->setFont(font1);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_3->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        lineEdit_3->setFrame(false);
        lineEdit_3->setCursorPosition(39);
        lineEdit_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_3->setReadOnly(true);

        verticalLayout_7->addWidget(lineEdit_3);

        Ordinate = new QPlainTextEdit(verticalWidget_6);
        Ordinate->setObjectName("Ordinate");

        verticalLayout_7->addWidget(Ordinate);

        Graph2 = new QPushButton(centralwidget);
        Graph2->setObjectName("Graph2");
        Graph2->setGeometry(QRect(30, 135, 291, 41));
        Graph2->setFont(font);
        Graph2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225)"));
        AddFile1 = new QPushButton(centralwidget);
        AddFile1->setObjectName("AddFile1");
        AddFile1->setGeometry(QRect(340, 245, 161, 24));
        AddFile1->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225)"));
        AddFile2 = new QPushButton(centralwidget);
        AddFile2->setObjectName("AddFile2");
        AddFile2->setGeometry(QRect(340, 475, 161, 24));
        AddFile2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225)"));
        verticalWidget_2 = new QWidget(centralwidget);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(340, 85, 561, 151));
        verticalWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_3 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_4 = new QLineEdit(verticalWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font1);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_4->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        lineEdit_4->setFrame(false);
        lineEdit_4->setCursorPosition(39);
        lineEdit_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_4->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit_4);

        Abscissa = new QPlainTextEdit(verticalWidget_2);
        Abscissa->setObjectName("Abscissa");

        verticalLayout_3->addWidget(Abscissa);

        verticalWidget_5 = new QWidget(centralwidget);
        verticalWidget_5->setObjectName("verticalWidget_5");
        verticalWidget_5->setGeometry(QRect(30, 345, 291, 151));
        verticalWidget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_6 = new QVBoxLayout(verticalWidget_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        lineEdit_2 = new QLineEdit(verticalWidget_5);
        lineEdit_2->setObjectName("lineEdit_2");
        QFont font2;
        font2.setPointSize(12);
        lineEdit_2->setFont(font2);
        lineEdit_2->setAutoFillBackground(false);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_2->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        lineEdit_2->setFrame(false);
        lineEdit_2->setCursorPosition(24);
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);
        lineEdit_2->setReadOnly(true);

        verticalLayout_6->addWidget(lineEdit_2);

        ShowError = new QTextBrowser(verticalWidget_5);
        ShowError->setObjectName("ShowError");

        verticalLayout_6->addWidget(ShowError);

        Graph3 = new QPushButton(centralwidget);
        Graph3->setObjectName("Graph3");
        Graph3->setGeometry(QRect(30, 185, 291, 41));
        Graph3->setFont(font);
        Graph3->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225)"));
        Graph1 = new QPushButton(centralwidget);
        Graph1->setObjectName("Graph1");
        Graph1->setGeometry(QRect(30, 85, 291, 41));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        Graph1->setFont(font3);
        Graph1->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225)"));
        Error = new QPushButton(centralwidget);
        Error->setObjectName("Error");
        Error->setGeometry(QRect(30, 285, 291, 41));
        Error->setFont(font);
        Error->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225)"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 25, 893, 41));
        QFont font4;
        font4.setPointSize(24);
        lineEdit->setFont(font4);
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        lineEdit->setFrame(false);
        lineEdit->setCursorPosition(29);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        lineEdit->setReadOnly(true);
        picture = new QLabel(centralwidget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(0, -30, 951, 588));
        picture->setPixmap(QPixmap(QString::fromUtf8("../../my-background.png")));
        MainWindow->setCentralWidget(centralwidget);
        picture->raise();
        Graph4->raise();
        verticalWidget_6->raise();
        Graph2->raise();
        AddFile1->raise();
        AddFile2->raise();
        verticalWidget_2->raise();
        verticalWidget_5->raise();
        Graph3->raise();
        Graph1->raise();
        Error->raise();
        lineEdit->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 945, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Graph4->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \321\207\320\265\321\202\320\262\321\221\321\200\321\202\320\276\320\263\320\276 \320\262\320\270\320\264\320\260", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260 (\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260):", nullptr));
        Graph2->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\262\320\270\320\264\320\260", nullptr));
        AddFile1->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\272\321\200\320\265\320\277\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        AddFile2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\272\321\200\320\265\320\277\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260 (\320\260\320\261\321\201\321\206\320\270\321\201\321\201\320\260):", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270:", nullptr));
        Graph3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \321\202\321\200\320\265\321\202\321\214\320\265\320\263\320\276 \320\262\320\270\320\264\320\260", nullptr));
        Graph1->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \320\262\320\270\320\264\320\260", nullptr));
        Error->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\321\213\321\205 \321\200\320\260\320\261\320\276\321\202", nullptr));
        picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
