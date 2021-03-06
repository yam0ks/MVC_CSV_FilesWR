#ifndef CHECKBOXDELEGATE_H
#define CHECKBOXDELEGATE_H

#include <QStyledItemDelegate>


class CheckBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:

    CheckBoxDelegate(QObject *parent = nullptr);

public:

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    void setEditorData(QWidget *editor, const QModelIndex &index) const;

    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // CHECKBOXDELEGATE_H
