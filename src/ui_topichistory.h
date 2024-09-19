/********************************************************************************
** Form generated from reading UI file 'topichistory.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPICHISTORY_H
#define UI_TOPICHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_TopicHistory
{
public:
    QGridLayout *gridLayout_3;
    QTextBrowser *path;
    QGridLayout *gridLayout_2;
    QTextBrowser *topicTextView;
    QListView *versions;
    QPushButton *close;

    void setupUi(QDialog *TopicHistory)
    {
        if (TopicHistory->objectName().isEmpty())
            TopicHistory->setObjectName(QString::fromUtf8("TopicHistory"));
        TopicHistory->resize(707, 543);
        gridLayout_3 = new QGridLayout(TopicHistory);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        path = new QTextBrowser(TopicHistory);
        path->setObjectName(QString::fromUtf8("path"));
        path->setMaximumSize(QSize(16777215, 30));

        gridLayout_3->addWidget(path, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        topicTextView = new QTextBrowser(TopicHistory);
        topicTextView->setObjectName(QString::fromUtf8("topicTextView"));

        gridLayout_2->addWidget(topicTextView, 0, 1, 1, 1);

        versions = new QListView(TopicHistory);
        versions->setObjectName(QString::fromUtf8("versions"));
        versions->setMaximumSize(QSize(200, 16777215));
        versions->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_2->addWidget(versions, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 3);

        close = new QPushButton(TopicHistory);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMaximumSize(QSize(200, 30));
        close->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	background-color: #00FF00;\n"
"}"));

        gridLayout_3->addWidget(close, 2, 2, 1, 1);


        retranslateUi(TopicHistory);

        QMetaObject::connectSlotsByName(TopicHistory);
    } // setupUi

    void retranslateUi(QDialog *TopicHistory)
    {
        TopicHistory->setWindowTitle(QApplication::translate("TopicHistory", "Dialog", nullptr));
        close->setText(QApplication::translate("TopicHistory", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TopicHistory: public Ui_TopicHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPICHISTORY_H
