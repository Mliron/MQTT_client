/********************************************************************************
** Form generated from reading UI file 'newandedittopic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWANDEDITTOPIC_H
#define UI_NEWANDEDITTOPIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewAndEditTopic
{
public:
    QGridLayout *gridLayout;
    QTextEdit *path;
    QPushButton *publish;
    QPushButton *selectFile;
    QTextEdit *textData;
    QLabel *label;
    QComboBox *qos;
    QCheckBox *retainOnServer;

    void setupUi(QDialog *NewAndEditTopic)
    {
        if (NewAndEditTopic->objectName().isEmpty())
            NewAndEditTopic->setObjectName(QString::fromUtf8("NewAndEditTopic"));
        NewAndEditTopic->resize(820, 515);
        gridLayout = new QGridLayout(NewAndEditTopic);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        path = new QTextEdit(NewAndEditTopic);
        path->setObjectName(QString::fromUtf8("path"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(path->sizePolicy().hasHeightForWidth());
        path->setSizePolicy(sizePolicy);
        path->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(path, 0, 0, 1, 7);

        publish = new QPushButton(NewAndEditTopic);
        publish->setObjectName(QString::fromUtf8("publish"));
        publish->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        gridLayout->addWidget(publish, 2, 6, 1, 1);

        selectFile = new QPushButton(NewAndEditTopic);
        selectFile->setObjectName(QString::fromUtf8("selectFile"));
        selectFile->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        gridLayout->addWidget(selectFile, 2, 5, 1, 1);

        textData = new QTextEdit(NewAndEditTopic);
        textData->setObjectName(QString::fromUtf8("textData"));

        gridLayout->addWidget(textData, 1, 0, 1, 7);

        label = new QLabel(NewAndEditTopic);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        qos = new QComboBox(NewAndEditTopic);
        qos->addItem(QString());
        qos->addItem(QString());
        qos->addItem(QString());
        qos->setObjectName(QString::fromUtf8("qos"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qos->sizePolicy().hasHeightForWidth());
        qos->setSizePolicy(sizePolicy1);
        qos->setMinimumSize(QSize(125, 0));

        gridLayout->addWidget(qos, 2, 1, 1, 1);

        retainOnServer = new QCheckBox(NewAndEditTopic);
        retainOnServer->setObjectName(QString::fromUtf8("retainOnServer"));

        gridLayout->addWidget(retainOnServer, 2, 4, 1, 1);


        retranslateUi(NewAndEditTopic);

        QMetaObject::connectSlotsByName(NewAndEditTopic);
    } // setupUi

    void retranslateUi(QDialog *NewAndEditTopic)
    {
        NewAndEditTopic->setWindowTitle(QApplication::translate("NewAndEditTopic", "Dialog", nullptr));
        path->setPlaceholderText(QApplication::translate("NewAndEditTopic", "path/to/topic", nullptr));
        publish->setText(QApplication::translate("NewAndEditTopic", "Publish", nullptr));
        selectFile->setText(QApplication::translate("NewAndEditTopic", "Select file", nullptr));
        textData->setPlaceholderText(QApplication::translate("NewAndEditTopic", "Write your data here OR select file to publish", nullptr));
        label->setText(QApplication::translate("NewAndEditTopic", "Quality of Service:", nullptr));
        qos->setItemText(0, QApplication::translate("NewAndEditTopic", "At most Once", nullptr));
        qos->setItemText(1, QApplication::translate("NewAndEditTopic", "At least Once", nullptr));
        qos->setItemText(2, QApplication::translate("NewAndEditTopic", "Exactly once", nullptr));

        retainOnServer->setText(QApplication::translate("NewAndEditTopic", "retain on server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewAndEditTopic: public Ui_NewAndEditTopic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWANDEDITTOPIC_H
