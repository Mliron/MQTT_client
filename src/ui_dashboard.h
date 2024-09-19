/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashBoard
{
public:
    QAction *actionasd;
    QGridLayout *gridLayout;
    QLineEdit *topicPath;
    QComboBox *widgetType;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *widgets_frame;
    QPushButton *addWidget;
    QPushButton *update;
    QTextEdit *description;

    void setupUi(QDialog *DashBoard)
    {
        if (DashBoard->objectName().isEmpty())
            DashBoard->setObjectName(QString::fromUtf8("DashBoard"));
        DashBoard->resize(808, 550);
        actionasd = new QAction(DashBoard);
        actionasd->setObjectName(QString::fromUtf8("actionasd"));
        gridLayout = new QGridLayout(DashBoard);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        topicPath = new QLineEdit(DashBoard);
        topicPath->setObjectName(QString::fromUtf8("topicPath"));

        gridLayout->addWidget(topicPath, 1, 0, 1, 1);

        widgetType = new QComboBox(DashBoard);
        widgetType->addItem(QString());
        widgetType->addItem(QString());
        widgetType->addItem(QString());
        widgetType->addItem(QString());
        widgetType->addItem(QString());
        widgetType->addItem(QString());
        widgetType->addItem(QString());
        widgetType->setObjectName(QString::fromUtf8("widgetType"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetType->sizePolicy().hasHeightForWidth());
        widgetType->setSizePolicy(sizePolicy);
        widgetType->setMinimumSize(QSize(50, 0));
        widgetType->setMaximumSize(QSize(130, 16777215));

        gridLayout->addWidget(widgetType, 1, 2, 1, 1);

        scrollArea = new QScrollArea(DashBoard);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 788, 499));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widgets_frame = new QVBoxLayout();
        widgets_frame->setObjectName(QString::fromUtf8("widgets_frame"));

        verticalLayout_2->addLayout(widgets_frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 2, 0, 1, 6);

        addWidget = new QPushButton(DashBoard);
        addWidget->setObjectName(QString::fromUtf8("addWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addWidget->sizePolicy().hasHeightForWidth());
        addWidget->setSizePolicy(sizePolicy1);
        addWidget->setMaximumSize(QSize(100, 16777215));
        addWidget->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        gridLayout->addWidget(addWidget, 1, 3, 1, 1);

        update = new QPushButton(DashBoard);
        update->setObjectName(QString::fromUtf8("update"));

        gridLayout->addWidget(update, 1, 4, 1, 1);

        description = new QTextEdit(DashBoard);
        description->setObjectName(QString::fromUtf8("description"));
        description->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(description, 1, 1, 1, 1);


        retranslateUi(DashBoard);

        QMetaObject::connectSlotsByName(DashBoard);
    } // setupUi

    void retranslateUi(QDialog *DashBoard)
    {
        DashBoard->setWindowTitle(QApplication::translate("DashBoard", "Dialog", nullptr));
        actionasd->setText(QApplication::translate("DashBoard", "asd", nullptr));
        topicPath->setText(QApplication::translate("DashBoard", "$SYS/broker/uptime", nullptr));
        topicPath->setPlaceholderText(QApplication::translate("DashBoard", "path/to/topic", nullptr));
        widgetType->setItemText(0, QApplication::translate("DashBoard", "temperature", nullptr));
        widgetType->setItemText(1, QApplication::translate("DashBoard", "detector", nullptr));
        widgetType->setItemText(2, QApplication::translate("DashBoard", "lever", nullptr));
        widgetType->setItemText(3, QApplication::translate("DashBoard", "blank", nullptr));
        widgetType->setItemText(4, QApplication::translate("DashBoard", "wattmeter", nullptr));
        widgetType->setItemText(5, QApplication::translate("DashBoard", "humidity meter", nullptr));
        widgetType->setItemText(6, QApplication::translate("DashBoard", "relay", nullptr));

        addWidget->setText(QApplication::translate("DashBoard", "Add widget", nullptr));
        update->setText(QApplication::translate("DashBoard", "update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashBoard: public Ui_DashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
