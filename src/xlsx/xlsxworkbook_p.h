/****************************************************************************
** Copyright (c) 2013 Debao Zhang <hello@debao.me>
** All right reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining
** a copy of this software and associated documentation files (the
** "Software"), to deal in the Software without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Software, and to
** permit persons to whom the Software is furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
** NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
** LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
** OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
** WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
#ifndef XLSXWORKBOOK_P_H
#define XLSXWORKBOOK_P_H
#include "xlsxworkbook.h"
#include <QSharedPointer>
#include <QPair>

namespace QXlsx {

class WorkbookPrivate
{
    Q_DECLARE_PUBLIC(Workbook)
public:
    WorkbookPrivate(Workbook *q);

    Workbook *q_ptr;

    QSharedPointer<SharedStrings> sharedStrings;
    QList<QSharedPointer<Worksheet> > worksheets;
    QSharedPointer<Styles> styles;
    QList<QImage> images;
    QList<Drawing *> drawings;

    QList<QPair<QString, QString> > sheetNameIdPairList;//Data from xml file

    bool strings_to_numbers_enabled;
    bool date1904;

    int x_window;
    int y_window;
    int window_width;
    int window_height;

    int activesheet;
    int firstsheet;
    int table_count;
};

}

#endif // XLSXWORKBOOK_P_H
