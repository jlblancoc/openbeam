/*+-------------------------------------------------------------------------+
|                             OpenBeam                                    |
|                                                                         |
| Copyright (C) 2015  Jose Luis Blanco Claraco                            |
| Distributed under GNU General Public License version 3                  |
|   See <http://www.gnu.org/licenses/>                                    |
+-------------------------------------------------------------------------+  */

#include <QApplication>
#include "mainwindow.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow   w;
    w.show();

    return a.exec();
}
