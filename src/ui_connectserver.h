/********************************************************************************
** Form generated from reading UI file 'connectserver.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTSERVER_H
#define UI_CONNECTSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectServer
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *ProtocolLabel;
    QComboBox *Protocol;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *Username;
    QLineEdit *Password;
    QVBoxLayout *verticalLayout_13;
    QLabel *HostLabel;
    QLineEdit *Host;
    QVBoxLayout *verticalLayout_12;
    QLabel *PortLabel;
    QLineEdit *Port;
    QTextEdit *subscribeTopic;
    QPushButton *Connect;

    void setupUi(QDialog *ConnectServer)
    {
        if (ConnectServer->objectName().isEmpty())
            ConnectServer->setObjectName(QString::fromUtf8("ConnectServer"));
        ConnectServer->resize(550, 200);
        ConnectServer->setMaximumSize(QSize(1000, 200));
        gridLayout_2 = new QGridLayout(ConnectServer);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        ProtocolLabel = new QLabel(ConnectServer);
        ProtocolLabel->setObjectName(QString::fromUtf8("ProtocolLabel"));
        ProtocolLabel->setMaximumSize(QSize(16777215, 20));
        ProtocolLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_11->addWidget(ProtocolLabel);

        Protocol = new QComboBox(ConnectServer);
        Protocol->addItem(QString());
        Protocol->addItem(QString());
        Protocol->setObjectName(QString::fromUtf8("Protocol"));

        verticalLayout_11->addWidget(Protocol);


        gridLayout_2->addLayout(verticalLayout_11, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Username = new QLineEdit(ConnectServer);
        Username->setObjectName(QString::fromUtf8("Username"));

        horizontalLayout_4->addWidget(Username);

        Password = new QLineEdit(ConnectServer);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setEchoMode(QLineEdit::Password);
        Password->setPlaceholderText(QString::fromUtf8("Password"));

        horizontalLayout_4->addWidget(Password);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 3);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        HostLabel = new QLabel(ConnectServer);
        HostLabel->setObjectName(QString::fromUtf8("HostLabel"));
        HostLabel->setMaximumSize(QSize(16777215, 20));
        HostLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_13->addWidget(HostLabel);

        Host = new QLineEdit(ConnectServer);
        Host->setObjectName(QString::fromUtf8("Host"));

        verticalLayout_13->addWidget(Host);


        gridLayout_2->addLayout(verticalLayout_13, 0, 1, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        PortLabel = new QLabel(ConnectServer);
        PortLabel->setObjectName(QString::fromUtf8("PortLabel"));
        PortLabel->setMaximumSize(QSize(16777215, 20));
        PortLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_12->addWidget(PortLabel);

        Port = new QLineEdit(ConnectServer);
        Port->setObjectName(QString::fromUtf8("Port"));

        verticalLayout_12->addWidget(Port);


        gridLayout_2->addLayout(verticalLayout_12, 0, 2, 1, 1);

        subscribeTopic = new QTextEdit(ConnectServer);
        subscribeTopic->setObjectName(QString::fromUtf8("subscribeTopic"));

        gridLayout_2->addWidget(subscribeTopic, 3, 0, 1, 3);

        Connect = new QPushButton(ConnectServer);
        Connect->setObjectName(QString::fromUtf8("Connect"));
        Connect->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        gridLayout_2->addWidget(Connect, 4, 0, 1, 3);


        retranslateUi(ConnectServer);

        QMetaObject::connectSlotsByName(ConnectServer);
    } // setupUi

    void retranslateUi(QDialog *ConnectServer)
    {
        ConnectServer->setWindowTitle(QApplication::translate("ConnectServer", "Dialog", nullptr));
        ProtocolLabel->setText(QApplication::translate("ConnectServer", "Protocol", nullptr));
        Protocol->setItemText(0, QApplication::translate("ConnectServer", "mqtt://", nullptr));
        Protocol->setItemText(1, QApplication::translate("ConnectServer", "ws://", nullptr));

        Username->setText(QString());
        Username->setPlaceholderText(QApplication::translate("ConnectServer", "Username", nullptr));
        Password->setText(QString());
        HostLabel->setText(QApplication::translate("ConnectServer", "Host", nullptr));
        Host->setPlaceholderText(QApplication::translate("ConnectServer", "mqtt.eclipse.org", nullptr));
        PortLabel->setText(QApplication::translate("ConnectServer", "Port", nullptr));
        Port->setText(QApplication::translate("ConnectServer", "1883", nullptr));
        Port->setPlaceholderText(QApplication::translate("ConnectServer", "1883", nullptr));
        subscribeTopic->setHtml(QApplication::translate("ConnectServer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">$SYS/#</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">#</p></body></html>", nullptr));
        subscribeTopic->setPlaceholderText(QApplication::translate("ConnectServer", "write topic on each line", nullptr));
        Connect->setText(QApplication::translate("ConnectServer", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectServer: public Ui_ConnectServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTSERVER_H
