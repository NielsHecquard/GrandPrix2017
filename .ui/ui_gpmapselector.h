/********************************************************************************
** Form generated from reading UI file 'gpmapselector.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPMAPSELECTOR_H
#define UI_GPMAPSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPMapSelector
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listMap;

    void setupUi(QWidget *GPMapSelector)
    {
        if (GPMapSelector->objectName().isEmpty())
            GPMapSelector->setObjectName(QStringLiteral("GPMapSelector"));
        GPMapSelector->resize(400, 298);
        verticalLayout = new QVBoxLayout(GPMapSelector);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(GPMapSelector);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listMap = new QListWidget(GPMapSelector);
        listMap->setObjectName(QStringLiteral("listMap"));

        verticalLayout->addWidget(listMap);


        retranslateUi(GPMapSelector);

        QMetaObject::connectSlotsByName(GPMapSelector);
    } // setupUi

    void retranslateUi(QWidget *GPMapSelector)
    {
        GPMapSelector->setWindowTitle(QApplication::translate("GPMapSelector", "Form", 0));
        label->setText(QApplication::translate("GPMapSelector", "Map selection :", 0));
    } // retranslateUi

};

namespace Ui {
    class GPMapSelector: public Ui_GPMapSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPMAPSELECTOR_H
