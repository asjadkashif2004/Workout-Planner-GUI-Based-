#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void appendTextToBrowser(const QString &text); // Declaration of the new method


private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
