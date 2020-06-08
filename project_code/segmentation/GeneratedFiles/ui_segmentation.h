/********************************************************************************
** Form generated from reading UI file 'segmentation.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTATION_H
#define UI_SEGMENTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_segmentationClass
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *OpenFig;
    QLabel *index_check;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *page_up;
    QPushButton *page_down;
    QLabel *index_check_2;
    QLabel *doctor_answer;
    QPushButton *big;
    QPushButton *small;
    QPushButton *SaveFig;
    QPushButton *check;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *index;
    QLabel *save_result_2;
    QSpinBox *spinBox;
    QLabel *index_check_4;
    QLabel *save_result;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *segmentationClass)
    {
        if (segmentationClass->objectName().isEmpty())
            segmentationClass->setObjectName(QStringLiteral("segmentationClass"));
        segmentationClass->resize(1872, 880);
        segmentationClass->setStyleSheet(QStringLiteral("border-image: url(:/segmentation/art_design/background.png);"));
        centralWidget = new QWidget(segmentationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(170, 110, 521, 511));
        scrollArea->setStyleSheet(QStringLiteral("background-image: url(:/segmentation/art_design/2.png);"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 521, 511));
        scrollArea->setWidget(scrollAreaWidgetContents);
        OpenFig = new QPushButton(centralWidget);
        OpenFig->setObjectName(QStringLiteral("OpenFig"));
        OpenFig->setGeometry(QRect(10, 240, 151, 51));
        OpenFig->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom.png);\n"
"color: rgb(0, 0, 0);\n"
"font: 75 13pt \"AcadEref\";"));
        index_check = new QLabel(centralWidget);
        index_check->setObjectName(QStringLiteral("index_check"));
        index_check->setGeometry(QRect(30, 0, 131, 61));
        index_check->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/1.png);\n"
"font: 28pt \"AcadEref\";\n"
"color: rgb(255, 0, 0);"));
        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(1240, 110, 541, 511));
        scrollArea_2->setStyleSheet(QStringLiteral("background-image: url(:/segmentation/art_design/2.png);"));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setWidgetResizable(true);
        scrollArea_2->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 520, 490));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        page_up = new QPushButton(centralWidget);
        page_up->setObjectName(QStringLiteral("page_up"));
        page_up->setGeometry(QRect(260, 630, 131, 41));
        page_up->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom.png);\n"
"color: rgb(140, 0, 255);\n"
"font: 16pt \"AcadEref\";"));
        page_down = new QPushButton(centralWidget);
        page_down->setObjectName(QStringLiteral("page_down"));
        page_down->setGeometry(QRect(1400, 640, 131, 41));
        page_down->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom.png);\n"
"color: rgb(140, 0, 255);\n"
"font: 16pt \"AcadEref\";"));
        index_check_2 = new QLabel(centralWidget);
        index_check_2->setObjectName(QStringLiteral("index_check_2"));
        index_check_2->setGeometry(QRect(510, 680, 231, 51));
        index_check_2->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/1.png);\n"
"font: 18pt \"AcadEref\";\n"
"color: rgb(255, 0, 0);"));
        doctor_answer = new QLabel(centralWidget);
        doctor_answer->setObjectName(QStringLiteral("doctor_answer"));
        doctor_answer->setGeometry(QRect(740, 680, 231, 51));
        doctor_answer->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/1.png);\n"
"font: 18pt \"Corbel\";\n"
"color: rgb(255, 0, 0);"));
        big = new QPushButton(centralWidget);
        big->setObjectName(QStringLiteral("big"));
        big->setGeometry(QRect(1790, 460, 71, 41));
        big->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom.png);\n"
"color: rgb(140, 0, 255);\n"
"font: 16pt \"AcadEref\";"));
        small = new QPushButton(centralWidget);
        small->setObjectName(QStringLiteral("small"));
        small->setGeometry(QRect(1790, 530, 71, 41));
        small->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom.png);\n"
"color: rgb(140, 0, 255);\n"
"font: 16pt \"AcadEref\";"));
        SaveFig = new QPushButton(centralWidget);
        SaveFig->setObjectName(QStringLiteral("SaveFig"));
        SaveFig->setGeometry(QRect(10, 320, 151, 51));
        SaveFig->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom.png);\n"
"color: rgb(0, 0, 0);\n"
"font: 75 13pt \"AcadEref\";"));
        check = new QPushButton(centralWidget);
        check->setObjectName(QStringLiteral("check"));
        check->setGeometry(QRect(1040, 680, 261, 61));
        check->setStyleSheet(QLatin1String("color: rgb(255, 0, 4);\n"
"border-image: url(:/segmentation/art_design/bottom3.png);\n"
"font: 12pt \"AcadEref\";"));
        check->setAutoDefault(false);
        check->setDefault(false);
        scrollArea_3 = new QScrollArea(centralWidget);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(700, 110, 531, 511));
        scrollArea_3->setStyleSheet(QStringLiteral("background-image: url(:/segmentation/art_design/2.png);"));
        scrollArea_3->setWidgetResizable(true);
        scrollArea_3->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 531, 511));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        index = new QLabel(centralWidget);
        index->setObjectName(QStringLiteral("index"));
        index->setGeometry(QRect(160, 0, 321, 61));
        index->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/1.png);\n"
"font: 28pt \"AcadEref\";\n"
"color: rgb(57, 173, 84);"));
        save_result_2 = new QLabel(centralWidget);
        save_result_2->setObjectName(QStringLiteral("save_result_2"));
        save_result_2->setGeometry(QRect(10, 750, 1781, 51));
        save_result_2->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom4.png);\n"
"font: 25 11pt \"Bahnschrift Light Condensed\";\n"
"color: rgb(255, 0, 0);"));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 480, 141, 91));
        spinBox->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom4.jpg);\n"
"color: rgb(0, 0, 100);\n"
"font: 20pt \"AcadEref\";"));
        spinBox->setMaximum(10000);
        spinBox->setSingleStep(1);
        index_check_4 = new QLabel(centralWidget);
        index_check_4->setObjectName(QStringLiteral("index_check_4"));
        index_check_4->setGeometry(QRect(20, 450, 141, 31));
        index_check_4->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom4.png);\n"
"color: rgb(0, 0, 100);\n"
"font: 10pt \"AcadEref\";"));
        save_result = new QLabel(centralWidget);
        save_result->setObjectName(QStringLiteral("save_result"));
        save_result->setGeometry(QRect(30, 60, 1751, 51));
        save_result->setStyleSheet(QLatin1String("border-image: url(:/segmentation/art_design/bottom4.png);\n"
"font: 25 11pt \"Bahnschrift Light Condensed\";\n"
"color: rgb(0, 0, 100);"));
        segmentationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(segmentationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1872, 26));
        segmentationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(segmentationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        segmentationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(segmentationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        segmentationClass->setStatusBar(statusBar);

        retranslateUi(segmentationClass);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), segmentationClass, SLOT(go_to()));

        QMetaObject::connectSlotsByName(segmentationClass);
    } // setupUi

    void retranslateUi(QMainWindow *segmentationClass)
    {
        segmentationClass->setWindowTitle(QApplication::translate("segmentationClass", "segmentation", 0));
        OpenFig->setText(QApplication::translate("segmentationClass", "\346\243\200\346\237\245\350\267\257\345\276\204", 0));
        index_check->setText(QApplication::translate("segmentationClass", "\350\277\233\345\272\246", 0));
        page_up->setText(QApplication::translate("segmentationClass", "\344\270\212\344\270\200\345\274\240", 0));
        page_down->setText(QApplication::translate("segmentationClass", "\344\270\213\344\270\200\345\274\240", 0));
        index_check_2->setText(QApplication::translate("segmentationClass", "\345\214\273\347\224\237\345\210\244\350\257\273\347\273\223\346\236\234\357\274\232", 0));
        doctor_answer->setText(QApplication::translate("segmentationClass", "NULL", 0));
        big->setText(QApplication::translate("segmentationClass", "\346\224\276\345\244\247", 0));
        small->setText(QApplication::translate("segmentationClass", "\347\274\251\345\260\217", 0));
        SaveFig->setText(QApplication::translate("segmentationClass", "\347\273\223\346\236\234\350\267\257\345\276\204", 0));
        check->setText(QApplication::translate("segmentationClass", "       \351\234\200\350\246\201\345\206\215\346\254\241\346\243\200\346\237\245", 0));
        index->setText(QString());
        save_result_2->setText(QString());
        index_check_4->setText(QApplication::translate("segmentationClass", "\347\233\264\346\216\245\350\267\263\350\275\254\345\210\260", 0));
        save_result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class segmentationClass: public Ui_segmentationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMENTATION_H
