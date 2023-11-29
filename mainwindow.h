#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_customersButton_clicked();

    void on_carsButton_clicked();

    void on_rentalsButton_clicked();

    void on_actionExit_triggered();



private:
    Ui::MainWindow *ui;
};

