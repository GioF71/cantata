/*
 * Cantata
 *
 * Copyright (c) 2011-2021 Craig Drummond <craig.p.drummond@gmail.com>
 *
 * ----
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef ACTIONMODEL_H
#define ACTIONMODEL_H

#include <QAbstractItemModel>
#include <QMetaType>
#include "support/action.h"
#include "config.h"

class ActionModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    ActionModel(QObject *p=nullptr) : QAbstractItemModel(p) { }
    ~ActionModel() override { }
    
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    virtual void resetModel() { beginResetModel(); endResetModel(); }
};

Q_DECLARE_METATYPE(QList<Action *>)

#endif
