/********************************************************************************
** Form generated from reading UI file 'Serveur_TCP.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEUR_TCP_H
#define UI_SERVEUR_TCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serveur_TCPClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_IP;
    QLineEdit *lineEdit_Port;
    QLabel *label_IP;
    QLabel *label_Port;
    QPushButton *pushButton_connexion;
    QLabel *label_status_connection;
    QPushButton *pushButton_avancer;
    QPushButton *pushButton_reculer;
    QPushButton *pushButton_gauche;
    QPushButton *pushButton_droite;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Serveur_TCPClass)
    {
        if (Serveur_TCPClass->objectName().isEmpty())
            Serveur_TCPClass->setObjectName(QString::fromUtf8("Serveur_TCPClass"));
        Serveur_TCPClass->resize(937, 473);
        centralWidget = new QWidget(Serveur_TCPClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit_IP = new QLineEdit(centralWidget);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(120, 40, 113, 20));
        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(120, 90, 113, 20));
        label_IP = new QLabel(centralWidget);
        label_IP->setObjectName(QString::fromUtf8("label_IP"));
        label_IP->setGeometry(QRect(30, 40, 61, 21));
        label_Port = new QLabel(centralWidget);
        label_Port->setObjectName(QString::fromUtf8("label_Port"));
        label_Port->setGeometry(QRect(20, 90, 61, 21));
        pushButton_connexion = new QPushButton(centralWidget);
        pushButton_connexion->setObjectName(QString::fromUtf8("pushButton_connexion"));
        pushButton_connexion->setGeometry(QRect(120, 160, 75, 23));
        label_status_connection = new QLabel(centralWidget);
        label_status_connection->setObjectName(QString::fromUtf8("label_status_connection"));
        label_status_connection->setGeometry(QRect(270, 50, 321, 31));
        pushButton_avancer = new QPushButton(centralWidget);
        pushButton_avancer->setObjectName(QString::fromUtf8("pushButton_avancer"));
        pushButton_avancer->setGeometry(QRect(670, 140, 75, 23));
        pushButton_reculer = new QPushButton(centralWidget);
        pushButton_reculer->setObjectName(QString::fromUtf8("pushButton_reculer"));
        pushButton_reculer->setGeometry(QRect(670, 240, 75, 23));
        pushButton_gauche = new QPushButton(centralWidget);
        pushButton_gauche->setObjectName(QString::fromUtf8("pushButton_gauche"));
        pushButton_gauche->setGeometry(QRect(540, 190, 111, 31));
        pushButton_droite = new QPushButton(centralWidget);
        pushButton_droite->setObjectName(QString::fromUtf8("pushButton_droite"));
        pushButton_droite->setGeometry(QRect(770, 190, 111, 31));
        Serveur_TCPClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Serveur_TCPClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 937, 21));
        Serveur_TCPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Serveur_TCPClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Serveur_TCPClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Serveur_TCPClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Serveur_TCPClass->setStatusBar(statusBar);

        retranslateUi(Serveur_TCPClass);
        QObject::connect(pushButton_connexion, SIGNAL(clicked()), Serveur_TCPClass, SLOT(onConnectButtonClicked()));
        QObject::connect(pushButton_avancer, SIGNAL(clicked()), Serveur_TCPClass, SLOT(onAvancerButtonClicked()));
        QObject::connect(pushButton_reculer, SIGNAL(clicked()), Serveur_TCPClass, SLOT(onReculerButtonClicked()));
        QObject::connect(pushButton_droite, SIGNAL(clicked()), Serveur_TCPClass, SLOT(onDroitButtonClicked()));
        QObject::connect(pushButton_gauche, SIGNAL(clicked()), Serveur_TCPClass, SLOT(onGaucheButtonClicked()));

        QMetaObject::connectSlotsByName(Serveur_TCPClass);
    } // setupUi

    void retranslateUi(QMainWindow *Serveur_TCPClass)
    {
        Serveur_TCPClass->setWindowTitle(QCoreApplication::translate("Serveur_TCPClass", "Serveur_TCP", nullptr));
        label_IP->setText(QCoreApplication::translate("Serveur_TCPClass", "IP :", nullptr));
        label_Port->setText(QCoreApplication::translate("Serveur_TCPClass", "Port :", nullptr));
        pushButton_connexion->setText(QCoreApplication::translate("Serveur_TCPClass", "Connexion", nullptr));
        label_status_connection->setText(QCoreApplication::translate("Serveur_TCPClass", "Status de connexion : D\303\251connecter", nullptr));
        pushButton_avancer->setText(QCoreApplication::translate("Serveur_TCPClass", "Avancer", nullptr));
        pushButton_reculer->setText(QCoreApplication::translate("Serveur_TCPClass", "Reculer", nullptr));
        pushButton_gauche->setText(QCoreApplication::translate("Serveur_TCPClass", "Tourner \303\240 gauche", nullptr));
        pushButton_droite->setText(QCoreApplication::translate("Serveur_TCPClass", "Tourner \303\240 droite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serveur_TCPClass: public Ui_Serveur_TCPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEUR_TCP_H
