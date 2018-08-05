#include "LXHPassNote.h"
#include <qtextcodec>
#include <QFile>
#include <QApplication>

#include "modules/sendData.h"

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
	std::string data = 
		"Service:Login\r\n"
		"Data:";
	std::string response;
	
	data += "user=" + this->ui.lineEdit_login_user->text().toStdString();
	data += "&passwd=" + this->ui.lineEdit_login_passwd->text().toStdString();

	SendData sendding;
	sendding.SendRequest(data, response);
	this->ui.label_login_status->setText(QString::fromStdString(response));

}

void LXHPassNote::SwitchSkin(const QString &stylePath)
{
	QFile qss(stylePath);
	qss.open(QFile::ReadOnly);
	qApp->setStyleSheet(qss.readAll());
	qss.close();

}