/********************************************************************************
** Form generated from reading UI file 'gpcontrolview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPCONTROLVIEW_H
#define UI_GPCONTROLVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gpmapselector.h"

QT_BEGIN_NAMESPACE

class Ui_GPControlView
{
public:
    QVBoxLayout *verticalLayout;
    GPMapSelector *gpMapSelector;
    QGroupBox *driverGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cbFollow;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cbNextCarMode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *delaySlider;
    QSpinBox *delaySpinBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *runbutton;
    QPushButton *abortbutton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *GPControlView)
    {
        if (GPControlView->objectName().isEmpty())
            GPControlView->setObjectName(QStringLiteral("GPControlView"));
        GPControlView->resize(250, 427);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GPControlView->sizePolicy().hasHeightForWidth());
        GPControlView->setSizePolicy(sizePolicy);
        GPControlView->setMinimumSize(QSize(250, 0));
        GPControlView->setMaximumSize(QSize(250, 16777215));
        verticalLayout = new QVBoxLayout(GPControlView);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        gpMapSelector = new GPMapSelector(GPControlView);
        gpMapSelector->setObjectName(QStringLiteral("gpMapSelector"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(gpMapSelector->sizePolicy().hasHeightForWidth());
        gpMapSelector->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(gpMapSelector);

        driverGroupBox = new QGroupBox(GPControlView);
        driverGroupBox->setObjectName(QStringLiteral("driverGroupBox"));
        sizePolicy1.setHeightForWidth(driverGroupBox->sizePolicy().hasHeightForWidth());
        driverGroupBox->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(driverGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(GPControlView);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        cbFollow = new QComboBox(GPControlView);
        cbFollow->setObjectName(QStringLiteral("cbFollow"));

        horizontalLayout_3->addWidget(cbFollow);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(GPControlView);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_3);

        cbNextCarMode = new QComboBox(GPControlView);
        cbNextCarMode->setObjectName(QStringLiteral("cbNextCarMode"));

        horizontalLayout_4->addWidget(cbNextCarMode);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(GPControlView);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        delaySlider = new QSlider(GPControlView);
        delaySlider->setObjectName(QStringLiteral("delaySlider"));
        delaySlider->setMaximum(20);
        delaySlider->setPageStep(1);
        delaySlider->setSliderPosition(1);
        delaySlider->setOrientation(Qt::Horizontal);
        delaySlider->setTickPosition(QSlider::NoTicks);
        delaySlider->setTickInterval(2);

        horizontalLayout_2->addWidget(delaySlider);

        delaySpinBox = new QSpinBox(GPControlView);
        delaySpinBox->setObjectName(QStringLiteral("delaySpinBox"));
        delaySpinBox->setMaximum(20);
        delaySpinBox->setValue(1);

        horizontalLayout_2->addWidget(delaySpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        runbutton = new QPushButton(GPControlView);
        runbutton->setObjectName(QStringLiteral("runbutton"));

        horizontalLayout->addWidget(runbutton);

        abortbutton = new QPushButton(GPControlView);
        abortbutton->setObjectName(QStringLiteral("abortbutton"));

        horizontalLayout->addWidget(abortbutton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GPControlView);
        QObject::connect(delaySpinBox, SIGNAL(valueChanged(int)), delaySlider, SLOT(setValue(int)));
        QObject::connect(delaySlider, SIGNAL(valueChanged(int)), delaySpinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(GPControlView);
    } // setupUi

    void retranslateUi(QWidget *GPControlView)
    {
        GPControlView->setWindowTitle(QApplication::translate("GPControlView", "Form", 0));
        driverGroupBox->setTitle(QApplication::translate("GPControlView", "Driver selection", 0));
        label_2->setText(QApplication::translate("GPControlView", "Follow", 0));
        label_3->setText(QApplication::translate("GPControlView", "Order", 0));
        label->setText(QApplication::translate("GPControlView", "Delay", 0));
        runbutton->setText(QApplication::translate("GPControlView", "Run", 0));
        abortbutton->setText(QApplication::translate("GPControlView", "Abort", 0));
    } // retranslateUi

};

namespace Ui {
    class GPControlView: public Ui_GPControlView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPCONTROLVIEW_H
