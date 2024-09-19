/********************************************************************************
** Form generated from reading UI file 'showbinarydata.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWBINARYDATA_H
#define UI_SHOWBINARYDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowBinaryData
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *binDataView;

    void setupUi(QDialog *ShowBinaryData)
    {
        if (ShowBinaryData->objectName().isEmpty())
            ShowBinaryData->setObjectName(QString::fromUtf8("ShowBinaryData"));
        ShowBinaryData->resize(618, 386);
        gridLayout = new QGridLayout(ShowBinaryData);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(ShowBinaryData);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1304, 738));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        binDataView = new QLabel(scrollAreaWidgetContents);
        binDataView->setObjectName(QString::fromUtf8("binDataView"));
        binDataView->setPixmap(QPixmap(QString::fromUtf8("../examples/maxresdefault.jpg")));
        binDataView->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, binDataView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);


        retranslateUi(ShowBinaryData);

        QMetaObject::connectSlotsByName(ShowBinaryData);
    } // setupUi

    void retranslateUi(QDialog *ShowBinaryData)
    {
        ShowBinaryData->setWindowTitle(QApplication::translate("ShowBinaryData", "Dialog", nullptr));
        binDataView->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowBinaryData: public Ui_ShowBinaryData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWBINARYDATA_H
