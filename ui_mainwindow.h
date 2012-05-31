/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue 29. May 17:32:47 2012
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionParam_tres;
    QWidget *centralWidget;
    QPushButton *num1Button;
    QPushButton *num2Button;
    QPushButton *num3Button;
    QPushButton *num5Button;
    QPushButton *num6Button;
    QPushButton *num4Button;
    QPushButton *num8Button;
    QPushButton *num9Button;
    QPushButton *num7Button;
    QPushButton *opPlusButton;
    QPushButton *opMoinsButton;
    QPushButton *opEgalButton;
    QPushButton *num0Button;
    QPushButton *opVirguleButton;
    QPushButton *opFoisButton;
    QPushButton *opDIvButton;
    QPushButton *opModButton;
    QPushButton *opSignButton;
    QPushButton *opPowButton;
    QPushButton *opCosButton;
    QPushButton *opTanButton;
    QPushButton *opSinButton;
    QPushButton *opTanhButton;
    QPushButton *opCoshButton;
    QPushButton *opSinhButton;
    QPushButton *opInvButton;
    QPushButton *opLnButton;
    QPushButton *opLogButton;
    QPushButton *opSqrButton;
    QPushButton *opSqrtButton;
    QPushButton *opCubeButton;
    QPushButton *opFactButton;
    QPushButton *opEvalButton;
    QLineEdit *LigneEdition;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAffichage;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(489, 419);
        actionParam_tres = new QAction(MainWindow);
        actionParam_tres->setObjectName(QString::fromUtf8("actionParam_tres"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        num1Button = new QPushButton(centralWidget);
        num1Button->setObjectName(QString::fromUtf8("num1Button"));
        num1Button->setGeometry(QRect(290, 200, 41, 31));
        num2Button = new QPushButton(centralWidget);
        num2Button->setObjectName(QString::fromUtf8("num2Button"));
        num2Button->setGeometry(QRect(340, 200, 41, 31));
        num3Button = new QPushButton(centralWidget);
        num3Button->setObjectName(QString::fromUtf8("num3Button"));
        num3Button->setGeometry(QRect(390, 200, 41, 31));
        num5Button = new QPushButton(centralWidget);
        num5Button->setObjectName(QString::fromUtf8("num5Button"));
        num5Button->setGeometry(QRect(340, 240, 41, 31));
        num6Button = new QPushButton(centralWidget);
        num6Button->setObjectName(QString::fromUtf8("num6Button"));
        num6Button->setGeometry(QRect(390, 240, 41, 31));
        num4Button = new QPushButton(centralWidget);
        num4Button->setObjectName(QString::fromUtf8("num4Button"));
        num4Button->setGeometry(QRect(290, 240, 41, 31));
        num8Button = new QPushButton(centralWidget);
        num8Button->setObjectName(QString::fromUtf8("num8Button"));
        num8Button->setGeometry(QRect(340, 280, 41, 31));
        num9Button = new QPushButton(centralWidget);
        num9Button->setObjectName(QString::fromUtf8("num9Button"));
        num9Button->setGeometry(QRect(390, 280, 41, 31));
        num7Button = new QPushButton(centralWidget);
        num7Button->setObjectName(QString::fromUtf8("num7Button"));
        num7Button->setGeometry(QRect(290, 280, 41, 31));
        opPlusButton = new QPushButton(centralWidget);
        opPlusButton->setObjectName(QString::fromUtf8("opPlusButton"));
        opPlusButton->setGeometry(QRect(440, 240, 41, 31));
        opMoinsButton = new QPushButton(centralWidget);
        opMoinsButton->setObjectName(QString::fromUtf8("opMoinsButton"));
        opMoinsButton->setGeometry(QRect(440, 200, 41, 31));
        opEgalButton = new QPushButton(centralWidget);
        opEgalButton->setObjectName(QString::fromUtf8("opEgalButton"));
        opEgalButton->setGeometry(QRect(440, 280, 41, 71));
        num0Button = new QPushButton(centralWidget);
        num0Button->setObjectName(QString::fromUtf8("num0Button"));
        num0Button->setGeometry(QRect(290, 320, 91, 31));
        opVirguleButton = new QPushButton(centralWidget);
        opVirguleButton->setObjectName(QString::fromUtf8("opVirguleButton"));
        opVirguleButton->setGeometry(QRect(390, 320, 41, 31));
        opFoisButton = new QPushButton(centralWidget);
        opFoisButton->setObjectName(QString::fromUtf8("opFoisButton"));
        opFoisButton->setGeometry(QRect(440, 160, 41, 31));
        opDIvButton = new QPushButton(centralWidget);
        opDIvButton->setObjectName(QString::fromUtf8("opDIvButton"));
        opDIvButton->setGeometry(QRect(390, 160, 41, 31));
        opModButton = new QPushButton(centralWidget);
        opModButton->setObjectName(QString::fromUtf8("opModButton"));
        opModButton->setGeometry(QRect(10, 240, 41, 31));
        opSignButton = new QPushButton(centralWidget);
        opSignButton->setObjectName(QString::fromUtf8("opSignButton"));
        opSignButton->setGeometry(QRect(10, 280, 41, 31));
        opPowButton = new QPushButton(centralWidget);
        opPowButton->setObjectName(QString::fromUtf8("opPowButton"));
        opPowButton->setGeometry(QRect(10, 200, 41, 31));
        opCosButton = new QPushButton(centralWidget);
        opCosButton->setObjectName(QString::fromUtf8("opCosButton"));
        opCosButton->setGeometry(QRect(60, 240, 41, 31));
        opTanButton = new QPushButton(centralWidget);
        opTanButton->setObjectName(QString::fromUtf8("opTanButton"));
        opTanButton->setGeometry(QRect(60, 280, 41, 31));
        opSinButton = new QPushButton(centralWidget);
        opSinButton->setObjectName(QString::fromUtf8("opSinButton"));
        opSinButton->setGeometry(QRect(60, 200, 41, 31));
        opTanhButton = new QPushButton(centralWidget);
        opTanhButton->setObjectName(QString::fromUtf8("opTanhButton"));
        opTanhButton->setGeometry(QRect(110, 280, 41, 31));
        opCoshButton = new QPushButton(centralWidget);
        opCoshButton->setObjectName(QString::fromUtf8("opCoshButton"));
        opCoshButton->setGeometry(QRect(110, 240, 41, 31));
        opSinhButton = new QPushButton(centralWidget);
        opSinhButton->setObjectName(QString::fromUtf8("opSinhButton"));
        opSinhButton->setGeometry(QRect(110, 200, 41, 31));
        opInvButton = new QPushButton(centralWidget);
        opInvButton->setObjectName(QString::fromUtf8("opInvButton"));
        opInvButton->setGeometry(QRect(160, 280, 41, 31));
        opLnButton = new QPushButton(centralWidget);
        opLnButton->setObjectName(QString::fromUtf8("opLnButton"));
        opLnButton->setGeometry(QRect(160, 200, 41, 31));
        opLogButton = new QPushButton(centralWidget);
        opLogButton->setObjectName(QString::fromUtf8("opLogButton"));
        opLogButton->setGeometry(QRect(160, 240, 41, 31));
        opSqrButton = new QPushButton(centralWidget);
        opSqrButton->setObjectName(QString::fromUtf8("opSqrButton"));
        opSqrButton->setGeometry(QRect(210, 240, 41, 31));
        opSqrtButton = new QPushButton(centralWidget);
        opSqrtButton->setObjectName(QString::fromUtf8("opSqrtButton"));
        opSqrtButton->setGeometry(QRect(210, 200, 41, 31));
        opCubeButton = new QPushButton(centralWidget);
        opCubeButton->setObjectName(QString::fromUtf8("opCubeButton"));
        opCubeButton->setGeometry(QRect(210, 280, 41, 31));
        opFactButton = new QPushButton(centralWidget);
        opFactButton->setObjectName(QString::fromUtf8("opFactButton"));
        opFactButton->setGeometry(QRect(60, 320, 41, 31));
        opEvalButton = new QPushButton(centralWidget);
        opEvalButton->setObjectName(QString::fromUtf8("opEvalButton"));
        opEvalButton->setGeometry(QRect(10, 320, 41, 31));
        LigneEdition = new QLineEdit(centralWidget);
        LigneEdition->setObjectName(QString::fromUtf8("LigneEdition"));
        LigneEdition->setGeometry(QRect(12, 20, 471, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 489, 18));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QString::fromUtf8("menuAffichage"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuAffichage->addAction(actionParam_tres);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionParam_tres->setText(QApplication::translate("MainWindow", "Param\303\250tres", 0, QApplication::UnicodeUTF8));
        num1Button->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        num2Button->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        num3Button->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        num5Button->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        num6Button->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        num4Button->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        num8Button->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        num9Button->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        num7Button->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        opPlusButton->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        opMoinsButton->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        opEgalButton->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        num0Button->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        num0Button->setShortcut(QString());
        opVirguleButton->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        opFoisButton->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        opDIvButton->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        opModButton->setText(QApplication::translate("MainWindow", "MOD", 0, QApplication::UnicodeUTF8));
        opSignButton->setText(QApplication::translate("MainWindow", "SIGN", 0, QApplication::UnicodeUTF8));
        opPowButton->setText(QApplication::translate("MainWindow", "POW", 0, QApplication::UnicodeUTF8));
        opCosButton->setText(QApplication::translate("MainWindow", "cos", 0, QApplication::UnicodeUTF8));
        opTanButton->setText(QApplication::translate("MainWindow", "tan", 0, QApplication::UnicodeUTF8));
        opSinButton->setText(QApplication::translate("MainWindow", "sin", 0, QApplication::UnicodeUTF8));
        opTanhButton->setText(QApplication::translate("MainWindow", "tanh", 0, QApplication::UnicodeUTF8));
        opCoshButton->setText(QApplication::translate("MainWindow", "cosh", 0, QApplication::UnicodeUTF8));
        opSinhButton->setText(QApplication::translate("MainWindow", "sinh", 0, QApplication::UnicodeUTF8));
        opInvButton->setText(QApplication::translate("MainWindow", "inv", 0, QApplication::UnicodeUTF8));
        opLnButton->setText(QApplication::translate("MainWindow", "ln", 0, QApplication::UnicodeUTF8));
        opLogButton->setText(QApplication::translate("MainWindow", "log", 0, QApplication::UnicodeUTF8));
        opLogButton->setShortcut(QString());
        opSqrButton->setText(QApplication::translate("MainWindow", "sqr", 0, QApplication::UnicodeUTF8));
        opSqrtButton->setText(QApplication::translate("MainWindow", "sqrt", 0, QApplication::UnicodeUTF8));
        opCubeButton->setText(QApplication::translate("MainWindow", "cube", 0, QApplication::UnicodeUTF8));
        opFactButton->setText(QApplication::translate("MainWindow", "!", 0, QApplication::UnicodeUTF8));
        opFactButton->setShortcut(QString());
        opEvalButton->setText(QApplication::translate("MainWindow", "EVAL", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Affichage", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
