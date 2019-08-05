/********************************************************************************
** Form generated from reading UI file 'qt5gui01.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT5GUI01_H
#define UI_QT5GUI01_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt5GUI01Class
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;

    void setupUi(QWidget *Qt5GUI01Class)
    {
        if (Qt5GUI01Class->objectName().isEmpty())
            Qt5GUI01Class->setObjectName(QStringLiteral("Qt5GUI01Class"));
        Qt5GUI01Class->resize(803, 521);
        gridLayout = new QGridLayout(Qt5GUI01Class);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(Qt5GUI01Class);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton, 0, Qt::AlignBottom);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2, 0, Qt::AlignBottom);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3, 0, Qt::AlignBottom);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1, Qt::AlignBottom);

        groupBox1 = new QGroupBox(Qt5GUI01Class);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        horizontalLayout_2 = new QHBoxLayout(groupBox1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_7 = new QRadioButton(groupBox1);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout_2->addWidget(radioButton_7, 0, Qt::AlignBottom);

        radioButton_6 = new QRadioButton(groupBox1);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout_2->addWidget(radioButton_6, 0, Qt::AlignBottom);

        radioButton_8 = new QRadioButton(groupBox1);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout_2->addWidget(radioButton_8, 0, Qt::AlignBottom);

        radioButton_5 = new QRadioButton(groupBox1);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout_2->addWidget(radioButton_5, 0, Qt::AlignBottom);

        radioButton_4 = new QRadioButton(groupBox1);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_2->addWidget(radioButton_4, 0, Qt::AlignBottom);


        gridLayout->addWidget(groupBox1, 0, 1, 1, 1, Qt::AlignBottom);


        retranslateUi(Qt5GUI01Class);

        QMetaObject::connectSlotsByName(Qt5GUI01Class);
    } // setupUi

    void retranslateUi(QWidget *Qt5GUI01Class)
    {
        Qt5GUI01Class->setWindowTitle(QApplication::translate("Qt5GUI01Class", "Qt5GUI01", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Qt5GUI01Class", "\354\204\240", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Qt5GUI01Class", "\354\202\254\352\260\201\355\230\225", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Qt5GUI01Class", "\355\203\200\354\233\220", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("Qt5GUI01Class", "\352\262\200\354\240\225", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("Qt5GUI01Class", "\355\225\230\354\226\221", Q_NULLPTR));
        radioButton_8->setText(QApplication::translate("Qt5GUI01Class", "\353\271\250\352\260\225", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("Qt5GUI01Class", "\354\264\210\353\241\235", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("Qt5GUI01Class", "\355\214\214\353\236\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qt5GUI01Class: public Ui_Qt5GUI01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT5GUI01_H
