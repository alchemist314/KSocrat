/*
    KSocrat
    Version 3.2.1, 17 July 2004
    (C) 2000-2004 Zavolzhsky Alexandr <zavolzhsky@mail.ru>
    Version 5.0.1, 15 Februaury 2023
    (C) 2023 Modify by Grigory Golovanov <magentrum@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA...
*/


#include <QtWidgets>
#include <QFile>
#include <QDebug>
#include "ksocrat.h"

Ksocrat::Ksocrat(QWidget *parent)
    : QWidget(parent)
{
    QWidget::setWindowTitle("KSocrat 5.0");
    QWidget::resize(400,300);

    QLabel *lblLabel = new QLabel("String:");
    lblLineEdit = new QLineEdit;
    txtEdit = new QTextEdit();

    btnRadioENRU = new QRadioButton(tr("en->ru"));
    btnRadioRUEN = new QRadioButton(tr("ru->en"));

    btnRadioENRU->setChecked(true);

    QPushButton *btnButton = new QPushButton ("Search");
    connect(btnButton, &QAbstractButton::clicked, this, &Ksocrat::btnAction);
    connect(lblLineEdit, &QLineEdit::returnPressed, this, &Ksocrat::btnAction);

    QGridLayout *layout = new QGridLayout(this);;
    layout->addWidget(lblLabel, 0, 0);
    layout->addWidget(lblLineEdit, 0, 1);
    layout->addWidget(btnRadioENRU, 1, 0);
    layout->addWidget(btnRadioRUEN, 2, 0);
    layout->addWidget(btnButton, 1, 1);
    layout->addWidget(txtEdit, 3, 0, 1, 2);
}

void Ksocrat::btnAction() {
    QString sResultText = lblLineEdit->text();
    QString sFilePath;

    if (btnRadioENRU->isChecked() == true) {
	sFilePath="/opt/QT5/ksocrat-5.0.0/dict/enru_utf8.dic";
    } else {
	sFilePath="/opt/QT5/ksocrat-5.0.0/dict/ruen_utf8.dic";
    }

    QFile oFile(sFilePath);
    oFile.open(QFile::ReadOnly | QFile::Text);
    QTextStream oStream (&oFile);
    QString sLine;
    QString sStr;

    do {
	sLine= oStream.readLine();
	if(sLine.contains(lblLineEdit->text().toLower())) {
	    sStr += sLine + "\n";
	}
    } while (!sLine.isNull());

    txtEdit->setPlainText(sStr);
}