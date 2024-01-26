/********************************************************************************
** Form generated from reading UI file 'learnenglish.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNENGLISH_H
#define UI_LEARNENGLISH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearnEnglish
{
public:
    QAction *actionAide;
    QAction *actionA_Propos;
    QAction *actionQuitter_Jeux;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_8;
    QPushButton *pushButton_7;
    QLabel *label_23;
    QWidget *page_3;
    QGridLayout *gridLayout_8;
    QLabel *label_12;
    QListView *listView;
    QLabel *label_7;
    QPushButton *pushButton_8;
    QLabel *label_11;
    QPushButton *pushButton_30;
    QLabel *label_5;
    QLabel *label_9;
    QWidget *page_4;
    QGridLayout *gridLayout_9;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_45;
    QListView *listView_3;
    QLabel *label_25;
    QPushButton *pushButton_31;
    QPushButton *pushButton_19;
    QWidget *page_5;
    QGridLayout *gridLayout_2;
    QListView *listView_6;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_48;
    QLabel *label_46;
    QPushButton *pushButton_33;
    QPushButton *pushButton_32;
    QLabel *label_47;
    QWidget *page_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_15;
    QWidget *page_7;
    QPushButton *pushButton_12;
    QLabel *label_14;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *page_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *field_pseudo;
    QPushButton *pushButton;
    QLabel *label_16;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LearnEnglish)
    {
        if (LearnEnglish->objectName().isEmpty())
            LearnEnglish->setObjectName("LearnEnglish");
        LearnEnglish->resize(539, 336);
        actionAide = new QAction(LearnEnglish);
        actionAide->setObjectName("actionAide");
        actionA_Propos = new QAction(LearnEnglish);
        actionA_Propos->setObjectName("actionA_Propos");
        actionQuitter_Jeux = new QAction(LearnEnglish);
        actionQuitter_Jeux->setObjectName("actionQuitter_Jeux");
        centralwidget = new QWidget(LearnEnglish);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(527, 285));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"alternate-background-color: rgb(0, 85, 127);"));
        page = new QWidget();
        page->setObjectName("page");
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(300, 200, 81, 41));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/page_2/imgPage_2_2.png);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(120, 250, 80, 18));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(230, 250, 80, 18));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(395, 190, 80, 18));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(395, 215, 80, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: italic 9pt \"Segoe UI\";\n"
"font: 700 9pt \"Segoe UI\";\n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(395, 240, 80, 18));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: italic 9pt \"Segoe UI\";\n"
"font: 700 9pt \"Segoe UI\";\n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 111, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_17 = new QLabel(page);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(-24, -4, 291, 291));
        label_17->setStyleSheet(QString::fromUtf8("image: url(:/page_2/imgPage_2_1.png);"));
        label_18 = new QLabel(page);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(260, -30, 291, 351));
        label_18->setStyleSheet(QString::fromUtf8("image: url(:/page_2/imgPage_2_1.png);"));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 20, 71, 21));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_7 = new QPushButton(page);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 250, 80, 18));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        label_23 = new QLabel(page);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(210, 20, 251, 21));
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page);
        label_18->raise();
        label_17->raise();
        label_6->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_4->raise();
        label_8->raise();
        pushButton_7->raise();
        label_23->raise();
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_8 = new QGridLayout(page_3);
        gridLayout_8->setObjectName("gridLayout_8");
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 9pt \"Segoe UI\";"));

        gridLayout_8->addWidget(label_12, 3, 0, 1, 1);

        listView = new QListView(page_3);
        listView->setObjectName("listView");
        listView->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        gridLayout_8->addWidget(listView, 2, 0, 1, 3);

        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");

        gridLayout_8->addWidget(label_7, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_8->addWidget(pushButton_8, 4, 0, 1, 1);

        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");

        gridLayout_8->addWidget(label_11, 0, 2, 1, 1);

        pushButton_30 = new QPushButton(page_3);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        gridLayout_8->addWidget(pushButton_30, 4, 2, 1, 1);

        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);

        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");

        gridLayout_8->addWidget(label_9, 1, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_9 = new QGridLayout(page_4);
        gridLayout_9->setObjectName("gridLayout_9");
        label_26 = new QLabel(page_4);
        label_26->setObjectName("label_26");

        gridLayout_9->addWidget(label_26, 0, 0, 1, 1);

        label_27 = new QLabel(page_4);
        label_27->setObjectName("label_27");

        gridLayout_9->addWidget(label_27, 0, 1, 1, 1);

        label_28 = new QLabel(page_4);
        label_28->setObjectName("label_28");

        gridLayout_9->addWidget(label_28, 0, 2, 1, 1);

        label_45 = new QLabel(page_4);
        label_45->setObjectName("label_45");

        gridLayout_9->addWidget(label_45, 1, 0, 1, 1);

        listView_3 = new QListView(page_4);
        listView_3->setObjectName("listView_3");
        listView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        gridLayout_9->addWidget(listView_3, 2, 0, 1, 3);

        label_25 = new QLabel(page_4);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 9pt \"Segoe UI\";"));

        gridLayout_9->addWidget(label_25, 3, 0, 1, 1);

        pushButton_31 = new QPushButton(page_4);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        gridLayout_9->addWidget(pushButton_31, 4, 2, 1, 1);

        pushButton_19 = new QPushButton(page_4);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_9->addWidget(pushButton_19, 4, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_2 = new QGridLayout(page_5);
        gridLayout_2->setObjectName("gridLayout_2");
        listView_6 = new QListView(page_5);
        listView_6->setObjectName("listView_6");
        listView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        gridLayout_2->addWidget(listView_6, 2, 0, 1, 3);

        label_49 = new QLabel(page_5);
        label_49->setObjectName("label_49");

        gridLayout_2->addWidget(label_49, 0, 0, 1, 1);

        label_50 = new QLabel(page_5);
        label_50->setObjectName("label_50");

        gridLayout_2->addWidget(label_50, 0, 2, 1, 1);

        label_48 = new QLabel(page_5);
        label_48->setObjectName("label_48");

        gridLayout_2->addWidget(label_48, 0, 1, 1, 1);

        label_46 = new QLabel(page_5);
        label_46->setObjectName("label_46");
        label_46->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 9pt \"Segoe UI\";"));

        gridLayout_2->addWidget(label_46, 3, 0, 1, 1);

        pushButton_33 = new QPushButton(page_5);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        gridLayout_2->addWidget(pushButton_33, 4, 2, 1, 1);

        pushButton_32 = new QPushButton(page_5);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(pushButton_32, 4, 0, 1, 1);

        label_47 = new QLabel(page_5);
        label_47->setObjectName("label_47");

        gridLayout_2->addWidget(label_47, 1, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        listView_6->raise();
        label_49->raise();
        label_48->raise();
        label_50->raise();
        label_47->raise();
        label_46->raise();
        pushButton_33->raise();
        pushButton_32->raise();
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        pushButton_10 = new QPushButton(page_6);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(230, 170, 80, 18));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 255, 172);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_11 = new QPushButton(page_6);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(230, 220, 80, 18));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_13 = new QLabel(page_6);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(180, 110, 211, 21));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(page_6);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(240, 50, 71, 20));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(page_6);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(-50, -70, 591, 421));
        label_15->setStyleSheet(QString::fromUtf8("image: url(:/page_2/back-ground_2.png);"));
        stackedWidget->addWidget(page_6);
        label_15->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        label_13->raise();
        label_10->raise();
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        pushButton_12 = new QPushButton(page_7);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(220, 220, 91, 31));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);\n"
"color: rgb(0, 0, 0);"));
        label_14 = new QLabel(page_7);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(50, 40, 101, 21));
        label_19 = new QLabel(page_7);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(370, 40, 61, 16));
        label_20 = new QLabel(page_7);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(60, 150, 161, 21));
        label_21 = new QLabel(page_7);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(370, 150, 51, 16));
        stackedWidget->addWidget(page_7);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 100, 41, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-image: url(:/page_2/back-ground.png);\n"
"image: url(:/page_2/learnEnglishPage_1.png);\n"
"font: italic 10pt \"Segoe UI\";"));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 481, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 italic 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(108, 58, 127);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 210, 71, 61));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/page_1/learn-english.png);\n"
"background-image: url(:/page_2/back-ground.png);"));
        field_pseudo = new QLineEdit(page_2);
        field_pseudo->setObjectName("field_pseudo");
        field_pseudo->setGeometry(QRect(200, 110, 141, 22));
        field_pseudo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 150, 80, 18));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(-40, -10, 611, 351));
        label_16->setStyleSheet(QString::fromUtf8("image: url(:/page_2/back-ground.png);"));
        stackedWidget->addWidget(page_2);
        label_16->raise();
        label_2->raise();
        label->raise();
        label_3->raise();
        field_pseudo->raise();
        pushButton->raise();

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        LearnEnglish->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LearnEnglish);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 539, 17));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        LearnEnglish->setMenuBar(menubar);
        statusbar = new QStatusBar(LearnEnglish);
        statusbar->setObjectName("statusbar");
        LearnEnglish->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionAide);
        menuMenu->addAction(actionA_Propos);

        retranslateUi(LearnEnglish);

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(LearnEnglish);
    } // setupUi

    void retranslateUi(QMainWindow *LearnEnglish)
    {
        LearnEnglish->setWindowTitle(QCoreApplication::translate("LearnEnglish", "LearnEnglish", nullptr));
        actionAide->setText(QCoreApplication::translate("LearnEnglish", "Aide", nullptr));
        actionA_Propos->setText(QCoreApplication::translate("LearnEnglish", "A Propos", nullptr));
        actionQuitter_Jeux->setText(QCoreApplication::translate("LearnEnglish", "Quitter_Jeux", nullptr));
        label_6->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("LearnEnglish", "Profil", nullptr));
        pushButton_6->setText(QCoreApplication::translate("LearnEnglish", "Quitter jeu", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LearnEnglish", "Niveau-1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LearnEnglish", "Niveau-2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("LearnEnglish", "Niveau-3", nullptr));
        label_4->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\">Bienvenue  Mr/Mme</p></body></html>", nullptr));
        label_17->setText(QString());
        label_18->setText(QString());
        label_8->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"><br/></span></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("LearnEnglish", "Deconnexion", nullptr));
        label_23->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> Veillez choisir votre Niveau pour jouer le jeu</span></p></body></html>", nullptr));
        label_12->setText(QString());
        label_7->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Nombre de question</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("LearnEnglish", "Repondre", nullptr));
        label_11->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">0</span></p></body></html>", nullptr));
        pushButton_30->setText(QCoreApplication::translate("LearnEnglish", "Levels", nullptr));
        label_5->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p><span style=\" font-weight:700;\">Niveau 1</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TextLabel</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p><span style=\" font-weight:700;\">Niveau 2</span></p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Nombre de question</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">0</span></p></body></html>", nullptr));
        label_45->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TextLabel</span></p></body></html>", nullptr));
        label_25->setText(QString());
        pushButton_31->setText(QCoreApplication::translate("LearnEnglish", "Levels", nullptr));
        pushButton_19->setText(QCoreApplication::translate("LearnEnglish", "Repondre", nullptr));
        label_49->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p><span style=\" font-weight:700;\">Niveau 3</span></p></body></html>", nullptr));
        label_50->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_48->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Nombre de question</span></p></body></html>", nullptr));
        label_46->setText(QString());
        pushButton_33->setText(QCoreApplication::translate("LearnEnglish", "Levels", nullptr));
        pushButton_32->setText(QCoreApplication::translate("LearnEnglish", "Repondre", nullptr));
        label_47->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TextLabel</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_10->setWhatsThis(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_10->setText(QCoreApplication::translate("LearnEnglish", "Niveau suivant", nullptr));
        pushButton_11->setText(QCoreApplication::translate("LearnEnglish", "Page d'acceuil", nullptr));
        label_13->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Voulez-vous pass\303\251 au noveau suivant ?</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">F\303\251licitation !!!!!!!</span></p></body></html>", nullptr));
        label_15->setText(QString());
        pushButton_12->setText(QCoreApplication::translate("LearnEnglish", "Retour", nullptr));
        label_14->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Votre Pseudo:  </span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Votre niveau actuel: </span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("LearnEnglish", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("LearnEnglish", "Bienvenue dans votre espace de Jeu d'apprentissage en anglais", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("LearnEnglish", "suivant", nullptr));
        label_16->setText(QString());
        menuMenu->setTitle(QCoreApplication::translate("LearnEnglish", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LearnEnglish: public Ui_LearnEnglish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNENGLISH_H
