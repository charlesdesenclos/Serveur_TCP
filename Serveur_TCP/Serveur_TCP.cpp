#include "Serveur_TCP.h"

Serveur_TCP::Serveur_TCP(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    socket = new QTcpSocket();
    QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
    QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
    QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));

    server = new QTcpServer(this);
    QObject::connect(server, SIGNAL(newConnection()), this, SLOT(onServerNewConnection()));
    QObject::connect(server, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
    server->listen(QHostAddress::AnyIPv4, 1234);
}

Serveur_TCP::~Serveur_TCP()
{
}

void Serveur_TCP::onConnectButtonClicked()
{
    // Récupération de l'ip + port

    QString ip = ui.lineEdit_IP->text();
    QString port = ui.lineEdit_Port->text();

    // Converson du port String en int

    bool check;
    int portAsInt = port.toInt(&check);
    if (check)
    {
        socket->connectToHost(ip, portAsInt);
    }
}

void Serveur_TCP::onSocketConnected()
{
    ui.label_status_connection->setText("Status de connection : Connecter");
}

void Serveur_TCP::onSocketDisconnected()
{
    ui.label_status_connection->setText("Status de connection : Deconnecter");
}



void Serveur_TCP::onSocketReadyRead()
{
    QByteArray data = socket->read(socket->bytesAvailable());
    QString str(data);
    ui.label_status_connection->setText("Status de connection : Message recu = " + str);
}

void Serveur_TCP::onServerNewConnection()
{
    ui.label_status_connection->setText("Une personne s'est connecter");
    QTcpSocket* client = server->nextPendingConnection();
    QObject::connect(client, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
    QObject::connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
}

void Serveur_TCP::onClientDisconnected()
{
    QTcpSocket* obj = qobject_cast<QTcpSocket*>(sender());
    QObject::disconnect(obj, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
    QObject::disconnect(obj, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
    obj->deleteLater();
}

void Serveur_TCP::onClientReadyRead()
{
    QTcpSocket* obj = qobject_cast<QTcpSocket*>(sender());
    QString ligne;
    while (socket->canReadLine())    // tant qu'on peut lire sur la socket
    {
        ligne = socket->readLine(); // on lit une ligne
        ui.label_status_connection->setText("Status de connection : Message recu = " + ligne);
    }

}

void Serveur_TCP::onAvancerButtonClicked()
{
    if (socket->state() == QTcpSocket::ConnectedState)
    {
        socket->write("Avancer \n");
    }
}

void Serveur_TCP::onReculerButtonClicked()
{
    if (socket->state() == QTcpSocket::ConnectedState)
    {
        socket->write("Reculer  \n");
    }
}

void Serveur_TCP::onGaucheButtonClicked()
{
    if (socket->state() == QTcpSocket::ConnectedState)
    {
        socket->write("Tourner a gauche  \n");
    }
}

void Serveur_TCP::onDroitButtonClicked()
{
    if (socket->state() == QTcpSocket::ConnectedState)
    {
        socket->write("Tourner a droite  \n");
    }
}
