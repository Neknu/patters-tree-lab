/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_to_start_page;
    QAction *actionreset_window;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_welcome;
    QLabel *label_select_data;
    QComboBox *combo_box_data_type;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_select_tree;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;
    QWidget *stackedWidgetPage2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuWelcome_Page;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;"));
        action_to_start_page = new QAction(MainWindow);
        action_to_start_page->setObjectName(QString::fromUtf8("action_to_start_page"));
        actionreset_window = new QAction(MainWindow);
        actionreset_window->setObjectName(QString::fromUtf8("actionreset_window"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 781, 541));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        verticalLayoutWidget = new QWidget(stackedWidgetPage1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 80, 251, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_welcome = new QLabel(verticalLayoutWidget);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(14);
        label_welcome->setFont(font);
        label_welcome->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label_welcome);

        label_select_data = new QLabel(verticalLayoutWidget);
        label_select_data->setObjectName(QString::fromUtf8("label_select_data"));
        label_select_data->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(10);
        label_select_data->setFont(font1);

        verticalLayout->addWidget(label_select_data);

        combo_box_data_type = new QComboBox(verticalLayoutWidget);
        combo_box_data_type->addItem(QString());
        combo_box_data_type->addItem(QString());
        combo_box_data_type->addItem(QString());
        combo_box_data_type->addItem(QString());
        combo_box_data_type->setObjectName(QString::fromUtf8("combo_box_data_type"));
        combo_box_data_type->setMinimumSize(QSize(100, 10));
        combo_box_data_type->setMaximumSize(QSize(10000, 30));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        combo_box_data_type->setFont(font2);

        verticalLayout->addWidget(combo_box_data_type);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, -1, -1);
        label_select_tree = new QLabel(verticalLayoutWidget);
        label_select_tree->setObjectName(QString::fromUtf8("label_select_tree"));
        label_select_tree->setMaximumSize(QSize(16777215, 30));
        label_select_tree->setFont(font1);

        verticalLayout_2->addWidget(label_select_tree);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, -1, -1, -1);
        radioButton = new QRadioButton(verticalLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(verticalLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        verticalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(verticalLayoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font1);

        verticalLayout_3->addWidget(radioButton_3);


        verticalLayout_2->addLayout(verticalLayout_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 30));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(verticalLayout_2);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        horizontalLayoutWidget = new QWidget(stackedWidgetPage2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 771, 627));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(600, 400));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border: solid 2px;"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(30, -1, 30, 400);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);

        verticalLayout_5->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);

        verticalLayout_5->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout_5->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_5);

        stackedWidget->addWidget(stackedWidgetPage2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuWelcome_Page = new QMenu(menubar);
        menuWelcome_Page->setObjectName(QString::fromUtf8("menuWelcome_Page"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuWelcome_Page->menuAction());
        menuWelcome_Page->addSeparator();
        menuWelcome_Page->addSeparator();
        menuWelcome_Page->addSeparator();
        menuWelcome_Page->addAction(action_to_start_page);
        menuWelcome_Page->addAction(actionreset_window);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_to_start_page->setText(QApplication::translate("MainWindow", "<- to start page", nullptr));
        actionreset_window->setText(QApplication::translate("MainWindow", "reset window", nullptr));
        label_welcome->setText(QApplication::translate("MainWindow", "Welcome", nullptr));
        label_select_data->setText(QApplication::translate("MainWindow", "Select data type:", nullptr));
        combo_box_data_type->setItemText(0, QApplication::translate("MainWindow", "int", nullptr));
        combo_box_data_type->setItemText(1, QApplication::translate("MainWindow", "string", nullptr));
        combo_box_data_type->setItemText(2, QApplication::translate("MainWindow", "double", nullptr));
        combo_box_data_type->setItemText(3, QApplication::translate("MainWindow", "char", nullptr));

        label_select_tree->setText(QApplication::translate("MainWindow", "Select tree type:", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Splay Tree", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "B Tree", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "B+ Tree", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QApplication::translate("MainWindow", "screen", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "ForwardIteration ReverseIteration", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Find", nullptr));
        menuWelcome_Page->setTitle(QApplication::translate("MainWindow", "tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
