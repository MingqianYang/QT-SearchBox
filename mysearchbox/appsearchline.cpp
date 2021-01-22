#include "appsearchline.h"

#include <QHBoxLayout>
#include <QPushButton>

AppSearchLine::AppSearchLine(QWidget *parent):QLineEdit(parent)
{
    QHBoxLayout *mainLayout = new QHBoxLayout;
    QPushButton *searchBtn = new QPushButton;
    //搜索图标大小为13*13，所以搜索按钮设置为固定大小13*13
    searchBtn->setFixedSize(13,13);
    searchBtn->setCursor(Qt::PointingHandCursor);
    searchBtn->setToolTip(tr("Search"));
    searchBtn->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/images/search-icon.png);"
                             "background:transparent;cursor:pointer;}");
    setPlaceholderText(tr("Search"));

    mainLayout->addStretch();
    mainLayout->addWidget(searchBtn);
    //图标离右侧边框为3，便于美观
    mainLayout->setContentsMargins(0,0,3,0);
    //文字离左侧边框为3，离右侧为3+8便于美观。8是图标的宽度
    setTextMargins(3,0,3+8,0);
    setContentsMargins(0,0,0,0);
    setLayout(mainLayout);

}
