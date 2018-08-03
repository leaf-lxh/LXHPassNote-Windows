#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LXHPassNote.h"

class LXHPassNote : public QMainWindow
{
	Q_OBJECT

public:
	LXHPassNote(QWidget *parent = Q_NULLPTR);
	void SwitchSkin(const QString &stylePath);

private:
	Ui::LXHPassNoteClass ui;

public slots:
	void LoginButton();
};
