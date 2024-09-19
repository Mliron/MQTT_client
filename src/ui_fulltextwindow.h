/********************************************************************************
** Form generated from reading UI file 'fulltextwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLTEXTWINDOW_H
#define UI_FULLTEXTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_fullTextWindow
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *topicPath;
    QPushButton *Close;
    QTextBrowser *topic;

    void setupUi(QDialog *fullTextWindow)
    {
        if (fullTextWindow->objectName().isEmpty())
            fullTextWindow->setObjectName(QString::fromUtf8("fullTextWindow"));
        fullTextWindow->resize(799, 529);
        gridLayout = new QGridLayout(fullTextWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        topicPath = new QTextBrowser(fullTextWindow);
        topicPath->setObjectName(QString::fromUtf8("topicPath"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topicPath->sizePolicy().hasHeightForWidth());
        topicPath->setSizePolicy(sizePolicy);
        topicPath->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(topicPath, 1, 0, 1, 1);

        Close = new QPushButton(fullTextWindow);
        Close->setObjectName(QString::fromUtf8("Close"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Close->sizePolicy().hasHeightForWidth());
        Close->setSizePolicy(sizePolicy1);
        Close->setMinimumSize(QSize(70, 0));
        Close->setMaximumSize(QSize(50, 50));
        Close->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        gridLayout->addWidget(Close, 1, 1, 1, 1);

        topic = new QTextBrowser(fullTextWindow);
        topic->setObjectName(QString::fromUtf8("topic"));

        gridLayout->addWidget(topic, 0, 0, 1, 2);


        retranslateUi(fullTextWindow);

        QMetaObject::connectSlotsByName(fullTextWindow);
    } // setupUi

    void retranslateUi(QDialog *fullTextWindow)
    {
        fullTextWindow->setWindowTitle(QApplication::translate("fullTextWindow", "Dialog", nullptr));
        Close->setText(QApplication::translate("fullTextWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fullTextWindow: public Ui_fullTextWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLTEXTWINDOW_H
