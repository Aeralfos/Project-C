/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *nameLB;
    QLabel *emailLB;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nameLE;
    QLineEdit *emailLE;
    QVBoxLayout *verticalLayout_8;
    QLabel *phoneLB;
    QLabel *wechatLB;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *phoneLE;
    QLineEdit *wechatLE;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *nameLB1;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *nameLE1;
    QVBoxLayout *verticalLayout_5;
    QLabel *phoneLB1;
    QLabel *idLB1;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *phoneLE1;
    QLineEdit *idLE1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *addressLB1;
    QLabel *provinceLB1;
    QComboBox *provinceCB1;
    QLabel *cityLB1;
    QLineEdit *cityLE1;
    QLabel *districtLB1;
    QLineEdit *districtLE1;
    QLineEdit *addressLE1;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *level1LB;
    QComboBox *level1CB;
    QLabel *itemNameLB;
    QLineEdit *itemNameLE;
    QLabel *guigeLB;
    QLineEdit *guigeLE;
    QHBoxLayout *horizontalLayout_7;
    QLabel *danjiaLB;
    QLineEdit *danjiaLE;
    QLabel *equalLB;
    QLabel *calculateLB;
    QLabel *rmbLB;
    QLabel *label_2;
    QLineEdit *weightLE;
    QLabel *serialLB;
    QLineEdit *serialLE;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *table1;
    QHBoxLayout *horizontalLayout_9;
    QLabel *shuliangLB;
    QLineEdit *shuliangLE;
    QTableWidget *table2;
    QPushButton *addInfoButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 900);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1244, 871));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        groupBox->setFont(font);
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLB = new QLabel(groupBox);
        nameLB->setObjectName(QStringLiteral("nameLB"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        nameLB->setFont(font1);
        nameLB->setMouseTracking(false);

        verticalLayout->addWidget(nameLB);

        emailLB = new QLabel(groupBox);
        emailLB->setObjectName(QStringLiteral("emailLB"));
        QFont font2;
        font2.setPointSize(16);
        emailLB->setFont(font2);

        verticalLayout->addWidget(emailLB);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nameLE = new QLineEdit(groupBox);
        nameLE->setObjectName(QStringLiteral("nameLE"));

        verticalLayout_2->addWidget(nameLE);

        emailLE = new QLineEdit(groupBox);
        emailLE->setObjectName(QStringLiteral("emailLE"));

        verticalLayout_2->addWidget(emailLE);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        phoneLB = new QLabel(groupBox);
        phoneLB->setObjectName(QStringLiteral("phoneLB"));
        phoneLB->setFont(font2);

        verticalLayout_8->addWidget(phoneLB);

        wechatLB = new QLabel(groupBox);
        wechatLB->setObjectName(QStringLiteral("wechatLB"));
        wechatLB->setFont(font2);

        verticalLayout_8->addWidget(wechatLB);


        horizontalLayout_5->addLayout(verticalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        phoneLE = new QLineEdit(groupBox);
        phoneLE->setObjectName(QStringLiteral("phoneLE"));

        verticalLayout_9->addWidget(phoneLE);

        wechatLE = new QLineEdit(groupBox);
        wechatLE->setObjectName(QStringLiteral("wechatLE"));

        verticalLayout_9->addWidget(wechatLE);


        horizontalLayout->addLayout(verticalLayout_9);


        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout_7->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_13 = new QVBoxLayout(groupBox_2);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        nameLB1 = new QLabel(groupBox_2);
        nameLB1->setObjectName(QStringLiteral("nameLB1"));
        nameLB1->setFont(font2);

        verticalLayout_3->addWidget(nameLB1);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        nameLE1 = new QLineEdit(groupBox_2);
        nameLE1->setObjectName(QStringLiteral("nameLE1"));

        verticalLayout_4->addWidget(nameLE1);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        phoneLB1 = new QLabel(groupBox_2);
        phoneLB1->setObjectName(QStringLiteral("phoneLB1"));
        phoneLB1->setFont(font2);

        verticalLayout_5->addWidget(phoneLB1);

        idLB1 = new QLabel(groupBox_2);
        idLB1->setObjectName(QStringLiteral("idLB1"));
        idLB1->setFont(font2);

        verticalLayout_5->addWidget(idLB1);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        phoneLE1 = new QLineEdit(groupBox_2);
        phoneLE1->setObjectName(QStringLiteral("phoneLE1"));

        verticalLayout_6->addWidget(phoneLE1);

        idLE1 = new QLineEdit(groupBox_2);
        idLE1->setObjectName(QStringLiteral("idLE1"));

        verticalLayout_6->addWidget(idLE1);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_12->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addressLB1 = new QLabel(groupBox_2);
        addressLB1->setObjectName(QStringLiteral("addressLB1"));
        addressLB1->setFont(font2);

        horizontalLayout_3->addWidget(addressLB1);

        provinceLB1 = new QLabel(groupBox_2);
        provinceLB1->setObjectName(QStringLiteral("provinceLB1"));
        provinceLB1->setFont(font2);

        horizontalLayout_3->addWidget(provinceLB1);

        provinceCB1 = new QComboBox(groupBox_2);
        provinceCB1->setObjectName(QStringLiteral("provinceCB1"));

        horizontalLayout_3->addWidget(provinceCB1);

        cityLB1 = new QLabel(groupBox_2);
        cityLB1->setObjectName(QStringLiteral("cityLB1"));
        cityLB1->setFont(font2);

        horizontalLayout_3->addWidget(cityLB1);

        cityLE1 = new QLineEdit(groupBox_2);
        cityLE1->setObjectName(QStringLiteral("cityLE1"));

        horizontalLayout_3->addWidget(cityLE1);

        districtLB1 = new QLabel(groupBox_2);
        districtLB1->setObjectName(QStringLiteral("districtLB1"));
        districtLB1->setFont(font2);

        horizontalLayout_3->addWidget(districtLB1);

        districtLE1 = new QLineEdit(groupBox_2);
        districtLE1->setObjectName(QStringLiteral("districtLE1"));

        horizontalLayout_3->addWidget(districtLE1);


        verticalLayout_12->addLayout(horizontalLayout_3);

        addressLE1 = new QLineEdit(groupBox_2);
        addressLE1->setObjectName(QStringLiteral("addressLE1"));

        verticalLayout_12->addWidget(addressLE1);


        verticalLayout_13->addLayout(verticalLayout_12);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        level1LB = new QLabel(groupBox_3);
        level1LB->setObjectName(QStringLiteral("level1LB"));

        horizontalLayout_4->addWidget(level1LB);

        level1CB = new QComboBox(groupBox_3);
        level1CB->setObjectName(QStringLiteral("level1CB"));

        horizontalLayout_4->addWidget(level1CB);

        itemNameLB = new QLabel(groupBox_3);
        itemNameLB->setObjectName(QStringLiteral("itemNameLB"));

        horizontalLayout_4->addWidget(itemNameLB);

        itemNameLE = new QLineEdit(groupBox_3);
        itemNameLE->setObjectName(QStringLiteral("itemNameLE"));

        horizontalLayout_4->addWidget(itemNameLE);

        guigeLB = new QLabel(groupBox_3);
        guigeLB->setObjectName(QStringLiteral("guigeLB"));

        horizontalLayout_4->addWidget(guigeLB);

        guigeLE = new QLineEdit(groupBox_3);
        guigeLE->setObjectName(QStringLiteral("guigeLE"));

        horizontalLayout_4->addWidget(guigeLE);


        verticalLayout_11->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        danjiaLB = new QLabel(groupBox_3);
        danjiaLB->setObjectName(QStringLiteral("danjiaLB"));

        horizontalLayout_7->addWidget(danjiaLB);

        danjiaLE = new QLineEdit(groupBox_3);
        danjiaLE->setObjectName(QStringLiteral("danjiaLE"));

        horizontalLayout_7->addWidget(danjiaLE);

        equalLB = new QLabel(groupBox_3);
        equalLB->setObjectName(QStringLiteral("equalLB"));

        horizontalLayout_7->addWidget(equalLB);

        calculateLB = new QLabel(groupBox_3);
        calculateLB->setObjectName(QStringLiteral("calculateLB"));

        horizontalLayout_7->addWidget(calculateLB);

        rmbLB = new QLabel(groupBox_3);
        rmbLB->setObjectName(QStringLiteral("rmbLB"));

        horizontalLayout_7->addWidget(rmbLB);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        weightLE = new QLineEdit(groupBox_3);
        weightLE->setObjectName(QStringLiteral("weightLE"));

        horizontalLayout_7->addWidget(weightLE);

        serialLB = new QLabel(groupBox_3);
        serialLB->setObjectName(QStringLiteral("serialLB"));

        horizontalLayout_7->addWidget(serialLB);

        serialLE = new QLineEdit(groupBox_3);
        serialLE->setObjectName(QStringLiteral("serialLE"));

        horizontalLayout_7->addWidget(serialLE);


        verticalLayout_11->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        addButton = new QPushButton(groupBox_3);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_8->addWidget(addButton);

        deleteButton = new QPushButton(groupBox_3);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout_8->addWidget(deleteButton);


        verticalLayout_11->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        verticalLayout_11->addLayout(horizontalLayout_6);


        verticalLayout_10->addLayout(verticalLayout_11);

        table1 = new QTableWidget(groupBox_3);
        table1->setObjectName(QStringLiteral("table1"));

        verticalLayout_10->addWidget(table1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        shuliangLB = new QLabel(groupBox_3);
        shuliangLB->setObjectName(QStringLiteral("shuliangLB"));

        horizontalLayout_9->addWidget(shuliangLB);

        shuliangLE = new QLineEdit(groupBox_3);
        shuliangLE->setObjectName(QStringLiteral("shuliangLE"));

        horizontalLayout_9->addWidget(shuliangLE);


        verticalLayout_10->addLayout(horizontalLayout_9);

        table2 = new QTableWidget(groupBox_3);
        table2->setObjectName(QStringLiteral("table2"));

        verticalLayout_10->addWidget(table2);

        addInfoButton = new QPushButton(groupBox_3);
        addInfoButton->setObjectName(QStringLiteral("addInfoButton"));
        addInfoButton->setFont(font2);

        verticalLayout_10->addWidget(addInfoButton);


        verticalLayout_13->addWidget(groupBox_3);

        groupBox_3->raise();

        verticalLayout_7->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Epanex - Waterloo", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\217\221\344\273\266\344\272\272\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        nameLB->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215*\357\274\232", Q_NULLPTR));
        emailLB->setText(QApplication::translate("MainWindow", "E-mail(\351\200\211\345\241\253):", Q_NULLPTR));
        phoneLB->setText(QApplication::translate("MainWindow", "\346\211\213\346\234\272(10\344\275\215)*\357\274\232", Q_NULLPTR));
        wechatLB->setText(QApplication::translate("MainWindow", "\345\276\256\344\277\241\350\264\246\345\217\267(\351\200\211\345\241\253)\357\274\232", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\224\266\344\273\266\344\272\272\344\277\241\346\201\257*\357\274\232", Q_NULLPTR));
        nameLB1->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        phoneLB1->setText(QApplication::translate("MainWindow", "\346\211\213\346\234\272(11\344\275\215)\357\274\232", Q_NULLPTR));
        idLB1->setText(QApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        addressLB1->setText(QApplication::translate("MainWindow", "\346\224\266\350\264\247\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        provinceLB1->setText(QApplication::translate("MainWindow", "\347\234\201\357\274\232", Q_NULLPTR));
        provinceCB1->clear();
        provinceCB1->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "A-\345\256\211\345\276\275\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "B-\345\214\227\344\272\254\345\270\202", Q_NULLPTR)
         << QApplication::translate("MainWindow", "C-\351\207\215\345\272\206\345\270\202", Q_NULLPTR)
         << QApplication::translate("MainWindow", "F-\347\246\217\345\273\272\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "G-\347\224\230\350\202\203\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "G-\345\271\277\344\270\234\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "G-\345\271\277\350\245\277\345\243\256\346\227\217\350\207\252\346\262\273\345\214\272", Q_NULLPTR)
         << QApplication::translate("MainWindow", "G-\350\264\265\345\267\236\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "H-\346\265\267\345\215\227\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "H-\346\262\263\345\214\227\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "H-\346\262\263\345\215\227\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "H-\351\273\221\351\276\231\346\261\237\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "H-\346\271\226\345\214\227\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "H-\346\271\226\345\215\227\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "J-\345\220\211\346\236\227\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "J-\346\261\237\350\213\217\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "J-\346\261\237\350\245\277\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "L-\350\276\275\345\256\201\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "N-\345\206\205\350\222\231\345\217\244\350\207\252\346\262\273\345\214\272", Q_NULLPTR)
         << QApplication::translate("MainWindow", "N-\345\256\201\345\244\217\345\233\236\346\227\217\350\207\252\346\262\273\345\214\272", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Q-\351\235\222\346\265\267\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "S-\345\261\261\344\270\234\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "S-\345\261\261\350\245\277\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "S-\351\231\225\350\245\277\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "S-\344\270\212\346\265\267\345\270\202", Q_NULLPTR)
         << QApplication::translate("MainWindow", "S-\345\233\233\345\267\235\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "T-\345\244\251\346\264\245\345\270\202", Q_NULLPTR)
         << QApplication::translate("MainWindow", "X-\350\245\277\350\227\217\350\207\252\346\262\273\345\214\272", Q_NULLPTR)
         << QApplication::translate("MainWindow", "X-\346\226\260\347\226\206\347\273\264\345\220\276\345\260\224\350\207\252\346\262\273\345\214\272", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Y-\344\272\221\345\215\227\347\234\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Z-\346\265\231\346\261\237\347\234\201", Q_NULLPTR)
        );
        cityLB1->setText(QApplication::translate("MainWindow", "\345\270\202\357\274\232", Q_NULLPTR));
        districtLB1->setText(QApplication::translate("MainWindow", "\345\214\272/\345\216\277\357\274\232", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\264\247\345\223\201\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        level1LB->setText(QApplication::translate("MainWindow", "\344\270\200\347\272\247\345\225\206\345\223\201\347\247\215\347\261\273\357\274\232", Q_NULLPTR));
        level1CB->clear();
        level1CB->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "\351\243\237\345\223\201\343\200\201\351\245\256\346\226\231", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\205\222", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\203\237", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\272\272\347\273\207\345\223\201\345\217\212\345\205\266\345\210\266\346\210\220\345\223\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\232\256\351\235\251\346\234\215\350\243\205\345\217\212\351\205\215\351\245\260", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\256\261\345\214\205\345\222\214\351\236\213\351\235\264", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\241\250\343\200\201\351\222\237\345\217\212\345\205\266\351\205\215\344\273\266\343\200\201\351\231\204\344\273\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\207\221\351\223\266\343\200\201\350\264\265\351\207\215\351\246\226\351\245\260\345\217\212\347\217\240\345\256\235\347\216\211\347\237\263", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\214\226\345\246\206\345\223\201\343\200\201\346\264\227\346\212\244\347\224\250\345\223\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\256\266\347\224\250\345\214\273\347\226\227\343\200\201\344\277\235\345\201\245\345\217\212\347\276\216\345\256\271\345\231\250\346\235\220", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\216\250\345\215\253\347\224\250\345\205\267\345\217\212\345\260\217\345\256\266\347\224\265", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\256\266\345\205\267", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\251\272\350\260\203\345\217\212\345\205\266\351\205\215\344\273\266\343\200\201\351\231\204\344\273\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\224\265\345\206\260\347\256\261\345\217\212\345\205\266\351\205\215\344\273\266\343\200\201\351\231\204\344\273\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\264\227\350\241\243\350\256\276\345\244\207\345\217\212\345\205\266\351\205\215\344\273\266\343\200\201\351\231\204\344\273\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\224\265\350\247\206\346\234\272\345\217\212\345\205\266\351\205\215\344\273\266\343\200\201\351\231\204\344\273\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\221\204\345\275\261\345\203\217\350\256\276\345\244\207\345\217\212\345\205\266\351\205\215\344\273\266\343\200\201\351\231\204\344\273\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\275\261\351\237\263\350\256\276\345\244\207\345\217\212\345\205\266\351\205\215\344\273\266\343\200\201\351\231\204\344\273\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\345\217\212\345\205\266\345\244\226\345\233\264\350\256\276\345\244\207", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\271\246\346\212\245\343\200\201\345\210\212\347\211\251\345\217\212\345\205\266\344\273\226\345\220\204\347\261\273\345\215\260\345\210\267\345\223\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\225\231\350\202\262\347\224\250\345\275\261\350\247\206\350\265\204\346\226\231", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\226\207\345\205\267\347\224\250\345\223\201\343\200\201\347\216\251\345\205\267\343\200\201\346\270\270\346\210\217\345\223\201\343\200\201\350\212\202\346\227\245\346\210\226\345\205\266\344\273\226\345\250\261\344\271\220\347\224\250\345\223\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\202\256\347\245\250\343\200\201\350\211\272\346\234\257\345\223\201\343\200\201\346\224\266\350\227\217\345\223\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\271\220\345\231\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\277\220\345\212\250\347\224\250\345\223\201\343\200\201\351\222\223\351\261\274\347\224\250\345\223\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\207\252\350\241\214\350\275\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\205\266\344\273\226\347\211\251\345\223\201", Q_NULLPTR)
        );
        itemNameLB->setText(QApplication::translate("MainWindow", "\345\223\201\345\220\215\357\274\232", Q_NULLPTR));
        guigeLB->setText(QApplication::translate("MainWindow", "\350\247\204\346\240\274/\345\236\213\345\217\267\357\274\232", Q_NULLPTR));
        danjiaLB->setText(QApplication::translate("MainWindow", "\345\215\225\344\273\267(CAD)\357\274\232", Q_NULLPTR));
        equalLB->setText(QApplication::translate("MainWindow", " = ", Q_NULLPTR));
        calculateLB->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        rmbLB->setText(QApplication::translate("MainWindow", "RMB", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\351\207\215\351\207\217(KG)\357\274\232", Q_NULLPTR));
        serialLB->setText(QApplication::translate("MainWindow", "\345\272\217\345\210\227\345\217\267(\347\224\265\345\255\220\344\272\247\345\223\201)\357\274\232", Q_NULLPTR));
        addButton->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        shuliangLB->setText(QApplication::translate("MainWindow", "\350\277\231\344\270\252\345\214\205\350\243\271\344\270\255\347\232\204\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        addInfoButton->setText(QApplication::translate("MainWindow", "\345\256\214\346\210\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
