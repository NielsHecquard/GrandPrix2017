/********************************************************************************
** Form generated from reading UI file 'gpdriverselector.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPDRIVERSELECTOR_H
#define UI_GPDRIVERSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPDriverSelector
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *debug;
    QLabel *info;

    void setupUi(QWidget *GPDriverSelector)
    {
        if (GPDriverSelector->objectName().isEmpty())
            GPDriverSelector->setObjectName(QStringLiteral("GPDriverSelector"));
        GPDriverSelector->resize(247, 96);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GPDriverSelector->sizePolicy().hasHeightForWidth());
        GPDriverSelector->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(GPDriverSelector);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(GPDriverSelector);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(GPDriverSelector);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        debug = new QCheckBox(GPDriverSelector);
        debug->setObjectName(QStringLiteral("debug"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(debug->sizePolicy().hasHeightForWidth());
        debug->setSizePolicy(sizePolicy2);
        debug->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(debug);

        info = new QLabel(GPDriverSelector);
        info->setObjectName(QStringLiteral("info"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy3);
        info->setText(QStringLiteral(""));
        info->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(info);


        verticalLayout->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(GPDriverSelector);

        QMetaObject::connectSlotsByName(GPDriverSelector);
    } // setupUi

    void retranslateUi(QWidget *GPDriverSelector)
    {
        GPDriverSelector->setWindowTitle(QApplication::translate("GPDriverSelector", "Form", 0));
        label->setText(QApplication::translate("GPDriverSelector", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        debug->setToolTip(QApplication::translate("GPDriverSelector", "Affiche stderr dans la console et les positions atteignables sur la carte", 0));
#endif // QT_NO_TOOLTIP
        debug->setText(QApplication::translate("GPDriverSelector", "Mode debug", 0));
    } // retranslateUi

};

namespace Ui {
    class GPDriverSelector: public Ui_GPDriverSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPDRIVERSELECTOR_H
