/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *chart_layout;
    QGroupBox *groupBox;
    QLineEdit *current_date;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *current_temp;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1370, 905);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 210, 1341, 601));
        chart_layout = new QHBoxLayout(horizontalLayoutWidget);
        chart_layout->setObjectName(QString::fromUtf8("chart_layout"));
        chart_layout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1361, 191));
        QFont font;
        font.setFamily(QString::fromUtf8("Abyssinica SIL"));
        font.setPointSize(14);
        font.setItalic(true);
        groupBox->setFont(font);
        current_date = new QLineEdit(groupBox);
        current_date->setObjectName(QString::fromUtf8("current_date"));
        current_date->setGeometry(QRect(1130, 110, 211, 31));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(250, 50, 261, 41));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Abyssinica SIL"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label->setFont(font1);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 130, 261, 41));
        current_temp = new QLabel(groupBox);
        current_temp->setObjectName(QString::fromUtf8("current_temp"));
        current_temp->setGeometry(QRect(710, 90, 161, 61));
        QFont font2;
        font2.setPointSize(60);
        current_temp->setFont(font2);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(880, 140, 67, 31));
        QFont font3;
        font3.setPointSize(19);
        label_4->setFont(font3);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(880, 80, 67, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(560, 110, 141, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(980, 110, 121, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1370, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "YOUR WEATHER FORCAST", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Cairo", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Alex", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "Luxor", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Dahab", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "Giza", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "Port Said", nullptr));

        label->setText(QApplication::translate("MainWindow", "Country", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Click to show", nullptr));
        current_temp->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "c", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "o", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Current weather", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Current Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
