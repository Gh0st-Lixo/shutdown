#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QThread>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()//Minutos do Shutdown
{
    QString entrada = ui->lineEdit->text(); // Armazenando a entrada em uma variavel
    int multiplicacao = entrada.toInt() * 60;// Convertendo para tipo int com .toint()
    QString uni = "shutdown -s -t " + QString::number(multiplicacao); //Unindo e convertendo o inteiro para QString com number
    QByteArray final = uni.toLatin1(); // Array de char .tolatin1() para capturar o que tem na outra String
    const char* comando = final.data();// Convertendo para const char*
    system (comando);

}


void MainWindow::on_pushButton_clicked()//Botão de cancelar o agendamento
{                                 //Cor verde(Só deixar o ponteiro ;-; )
    ui->pushButton->setStyleSheet("background-color:#FF0000");
    QTimer::singleShot(2000, this, [this]() {
        ui->pushButton->setStyleSheet("background-color:#00FF00");});
    system("shutdown -a"); // Comando para cancelar o agendamento de desligamento
    QTimer::singleShot(5000, this, [this]() {
        ui->pushButton->setStyleSheet("background-color:#FF0000");});
}

void MainWindow::on_pushButton_2_clicked()//Botão que Desliga imediatamente
{
    system("shutdown -s -f -t 0");
    ui->pushButton_2->setStyleSheet("background-color:#00FF00");
}

void MainWindow::on_pushButton_3_clicked()//Botão de reiniciar
{
    system("shutdown -r -f -t 0");
    ui->pushButton_3->setStyleSheet("background-color:#00FF00");
}

