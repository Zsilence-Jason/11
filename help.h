#ifndef HELP_H
#define HELP_H

#include <QMainWindow>

class help : public QMainWindow
{
    Q_OBJECT
public:
    explicit help(QWidget *parent = nullptr);
void paintEvent(QPaintEvent*);
void initScene();
signals:
void chooseSceneback();
};

#endif // HELP_H
