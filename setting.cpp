#include "setting.h"
#include "ui_setting.h"
#include <QSoundEffect>
#define WIN_WIGHT 400
#define WIN_HEIGHT 300

Setting::Setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    this->setWindowTitle("设置");
    setFixedSize(WIN_WIGHT,WIN_HEIGHT);
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_pushButton_clicked()
{
    QSoundEffect *effect=new QSoundEffect;
    effect->setSource(QUrl::fromLocalFile(":/sound/sounds/menuclick.wav"));
    effect->setLoopCount(1);
    effect->setVolume(2);
    effect->play();
    list=new Ranklist;
    list->show();
}
