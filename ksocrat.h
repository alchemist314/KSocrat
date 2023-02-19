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


#ifndef KSOCRAT_H
#define KSOCRAT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
class QLineEdit;
class QListWidget;
class QTextEdit;
class QRadioButton;
class QFile;
QT_END_NAMESPACE

class Ksocrat : public QWidget
{
    Q_OBJECT
    
public:
    Ksocrat(QWidget *parent = 0);

private slots:
    void btnAction();

private:
    QLabel *lblResult;
    QLineEdit *lblLineEdit;
    QLabel *lblMultiLineTextLabel;
    QListWidget *lstListBox;
    QTextEdit *txtEdit;
    QRadioButton *btnRadioENRU;
    QRadioButton *btnRadioRUEN;
    QFile *file;
};

#endif //KSOCRAT_H
