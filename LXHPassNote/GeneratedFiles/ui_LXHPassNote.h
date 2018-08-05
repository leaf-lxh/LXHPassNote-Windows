/********************************************************************************
** Form generated from reading UI file 'LXHPassNote.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXHPASSNOTE_H
#define UI_LXHPASSNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LXHPassNoteClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_login_user;
    QLineEdit *lineEdit_login_passwd;
    QCheckBox *checkBox_login_showPasswd;
    QPushButton *pushButton_login_do;
    QCheckBox *checkBox_login_savePasswd;
    QLabel *label_login_status;

    void setupUi(QMainWindow *LXHPassNoteClass)
    {
        if (LXHPassNoteClass->objectName().isEmpty())
            LXHPassNoteClass->setObjectName(QStringLiteral("LXHPassNoteClass"));
        LXHPassNoteClass->setWindowModality(Qt::WindowModal);
        LXHPassNoteClass->setEnabled(true);
        LXHPassNoteClass->resize(436, 231);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LXHPassNoteClass->sizePolicy().hasHeightForWidth());
        LXHPassNoteClass->setSizePolicy(sizePolicy);
        LXHPassNoteClass->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(LXHPassNoteClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 71, 21));
        label->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 60, 71, 21));
        label_2->setBaseSize(QSize(0, 0));
        label_2->setFont(font);
        lineEdit_login_user = new QLineEdit(centralWidget);
        lineEdit_login_user->setObjectName(QStringLiteral("lineEdit_login_user"));
        lineEdit_login_user->setGeometry(QRect(150, 20, 131, 21));
        lineEdit_login_passwd = new QLineEdit(centralWidget);
        lineEdit_login_passwd->setObjectName(QStringLiteral("lineEdit_login_passwd"));
        lineEdit_login_passwd->setGeometry(QRect(150, 60, 131, 21));
        checkBox_login_showPasswd = new QCheckBox(centralWidget);
        checkBox_login_showPasswd->setObjectName(QStringLiteral("checkBox_login_showPasswd"));
        checkBox_login_showPasswd->setGeometry(QRect(290, 65, 81, 16));
        pushButton_login_do = new QPushButton(centralWidget);
        pushButton_login_do->setObjectName(QStringLiteral("pushButton_login_do"));
        pushButton_login_do->setGeometry(QRect(60, 100, 291, 23));
        checkBox_login_savePasswd = new QCheckBox(centralWidget);
        checkBox_login_savePasswd->setObjectName(QStringLiteral("checkBox_login_savePasswd"));
        checkBox_login_savePasswd->setGeometry(QRect(290, 20, 81, 16));
        label_login_status = new QLabel(centralWidget);
        label_login_status->setObjectName(QStringLiteral("label_login_status"));
        label_login_status->setGeometry(QRect(60, 130, 291, 61));
        label_login_status->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        LXHPassNoteClass->setCentralWidget(centralWidget);

        retranslateUi(LXHPassNoteClass);

        QMetaObject::connectSlotsByName(LXHPassNoteClass);
    } // setupUi

    void retranslateUi(QMainWindow *LXHPassNoteClass)
    {
        LXHPassNoteClass->setWindowTitle(QApplication::translate("LXHPassNoteClass", "LXHPassNote", nullptr));
        label->setText(QApplication::translate("LXHPassNoteClass", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("LXHPassNoteClass", "\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox_login_showPasswd->setText(QApplication::translate("LXHPassNoteClass", "\345\257\206\347\240\201\345\217\257\350\247\206", nullptr));
        pushButton_login_do->setText(QApplication::translate("LXHPassNoteClass", "\347\231\273\351\231\206", nullptr));
        checkBox_login_savePasswd->setText(QApplication::translate("LXHPassNoteClass", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        label_login_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LXHPassNoteClass: public Ui_LXHPassNoteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXHPASSNOTE_H
