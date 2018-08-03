#include "LXHPassNote.h"
#include <qtextcodec>
#include <QFile>
#include <QApplication>

LXHPassNote::LXHPassNote(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//设置字符串编码格式
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

	//禁止自定义调整大小
	setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
	
	//控件信号
	connect(ui.pushButton_login_do, SIGNAL(clicked()), this, SLOT(LoginButton()));

	//设置皮肤
	this->SwitchSkin(":/LXHPassNote/Resources/white.qss");
}

void LXHPassNote::LoginButton()
{
	this->ui.label_login_status->setText(tr(u8"登陆中...."));
}

void LXHPassNote::SwitchSkin(const QString &stylePath)
{
	QFile qss(stylePath);
	qss.open(QFile::ReadOnly);
	qApp->setStyleSheet(qss.readAll());
	qss.close();

}