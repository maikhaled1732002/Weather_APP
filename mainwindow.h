#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "cities.h"
#include "data.h"
#include "curl.h"
#include "rapid_jason.h"
#include <QMainWindow>
#include <QtCharts>
#include <QtCore>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QChartView * current_view  = nullptr ;
};
#endif // MAINWINDOW_H