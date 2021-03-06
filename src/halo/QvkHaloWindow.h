/* vokoscreenNG
 * Copyright (C) 2017-2021 Volker Kohaupt
 *
 * Author:
 *      Volker Kohaupt <vkohaupt@freenet.de>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * --End_License--
 */

#ifndef QvkHaloWindow_H
#define QvkHaloWindow_H

#include <QWidget>

class QvkHaloWindow: public QWidget

{
    Q_OBJECT
public:
    QvkHaloWindow( QWidget *parent );
    virtual ~QvkHaloWindow();

    
public:
    void setDiameter( int value );
    void setOpacit( double value );
    void setColor( QColor value );

public slots:
    void slot_followMouse();


private:
    int diameter;
    QColor color = Qt::yellow;
    qreal opacity = 0.5;


private slots:


protected:
    void paintEvent(QPaintEvent *event);


};

#endif // QvkHaloWindow
