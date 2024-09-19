/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect_server;
    QAction *actionNew_Topic;
    QAction *actionDashboard;
    QAction *actionDisconnect;
    QAction *actionSimulate;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *Scroll;
    QGridLayout *gridLayout;
    QTextBrowser *TopicTextView;
    QHBoxLayout *horizontalLayout;
    QPushButton *TopicShowInNewWindow;
    QPushButton *TopicEdit;
    QPushButton *TopicHistory;
    QTreeView *TreeView;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(831, 544);
        actionConnect_server = new QAction(MainWindow);
        actionConnect_server->setObjectName(QString::fromUtf8("actionConnect_server"));
        actionNew_Topic = new QAction(MainWindow);
        actionNew_Topic->setObjectName(QString::fromUtf8("actionNew_Topic"));
        actionNew_Topic->setCheckable(false);
        actionDashboard = new QAction(MainWindow);
        actionDashboard->setObjectName(QString::fromUtf8("actionDashboard"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionSimulate = new QAction(MainWindow);
        actionSimulate->setObjectName(QString::fromUtf8("actionSimulate"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        Scroll = new QWidget();
        Scroll->setObjectName(QString::fromUtf8("Scroll"));
        Scroll->setGeometry(QRect(0, 0, 401, 431));
        gridLayout = new QGridLayout(Scroll);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TopicTextView = new QTextBrowser(Scroll);
        TopicTextView->setObjectName(QString::fromUtf8("TopicTextView"));

        gridLayout->addWidget(TopicTextView, 0, 0, 1, 1);

        scrollArea->setWidget(Scroll);

        gridLayout_2->addWidget(scrollArea, 2, 5, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        TopicShowInNewWindow = new QPushButton(centralWidget);
        TopicShowInNewWindow->setObjectName(QString::fromUtf8("TopicShowInNewWindow"));
        TopicShowInNewWindow->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        horizontalLayout->addWidget(TopicShowInNewWindow);

        TopicEdit = new QPushButton(centralWidget);
        TopicEdit->setObjectName(QString::fromUtf8("TopicEdit"));
        TopicEdit->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        horizontalLayout->addWidget(TopicEdit);

        TopicHistory = new QPushButton(centralWidget);
        TopicHistory->setObjectName(QString::fromUtf8("TopicHistory"));
        TopicHistory->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        horizontalLayout->addWidget(TopicHistory);


        gridLayout_2->addLayout(horizontalLayout, 3, 5, 1, 1);

        TreeView = new QTreeView(centralWidget);
        TreeView->setObjectName(QString::fromUtf8("TreeView"));
        TreeView->setEditTriggers(QAbstractItemView::EditKeyPressed);
        TreeView->header()->setVisible(false);

        gridLayout_2->addWidget(TreeView, 0, 2, 4, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionDisconnect);
        toolBar->addSeparator();
        toolBar->addAction(actionConnect_server);
        toolBar->addSeparator();
        toolBar->addAction(actionNew_Topic);
        toolBar->addSeparator();
        toolBar->addAction(actionDashboard);
        toolBar->addSeparator();
        toolBar->addAction(actionSimulate);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnect_server->setText(QApplication::translate("MainWindow", "Connect server", nullptr));
        actionNew_Topic->setText(QApplication::translate("MainWindow", "New Topic", nullptr));
        actionDashboard->setText(QApplication::translate("MainWindow", "Dashboard", nullptr));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        actionSimulate->setText(QApplication::translate("MainWindow", "Start simulation", nullptr));
        TopicShowInNewWindow->setText(QApplication::translate("MainWindow", "Show in new window", nullptr));
        TopicEdit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        TopicHistory->setText(QApplication::translate("MainWindow", "History", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
