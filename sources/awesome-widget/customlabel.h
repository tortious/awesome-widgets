/***************************************************************************
 *   This file is part of pytextmonitor                                    *
 *                                                                         *
 *   pytextmonitor is free software: you can redistribute it and/or        *
 *   modify it under the terms of the GNU General Public License as        *
 *   published by the Free Software Foundation, either version 3 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   pytextmonitor is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with pytextmonitor. If not, see http://www.gnu.org/licenses/    *
 ***************************************************************************/

#ifndef CUSTOMLABEL_H
#define CUSTOMLABEL_H

#include <Plasma/Label>


class AwesomeWidget;

class CustomLabel : public Plasma::Label
{
    Q_OBJECT

public:
    CustomLabel(AwesomeWidget *wid, const bool debugCmd);
    ~CustomLabel();
    void setPopupEnabled(const bool state);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    bool debug;
    bool enablePopup;
};


#endif /* CUSTOMLABEL_H */