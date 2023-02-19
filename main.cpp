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

#include <QApplication>
#include <QPushButton>
#include <QtWidgets>

#include "ksocrat.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    Ksocrat ksocrat;
    ksocrat.show();
    return app.exec();
}