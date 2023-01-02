#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Serveur_TCP.h"
#include <qtcpsocket.h>
#include <QString>
#include <QTcpServer>

class Serveur_TCP : public QMainWindow
{
    Q_OBJECT

public:
    Serveur_TCP(QWidget *parent = nullptr);
    ~Serveur_TCP();
    QTcpSocket* socket;
    QTcpServer* server;

private:
    Ui::Serveur_TCPClass ui;

public slots :
    void onConnectButtonClicked();
    void onSocketConnected();
    void onSocketDisconnected();

    void onSocketReadyRead();

    void onServerNewConnection();
    void onClientDisconnected();
    void onClientReadyRead();

    void onAvancerButtonClicked();
    void onReculerButtonClicked();
    void onGaucheButtonClicked();
    void onDroitButtonClicked();
};
