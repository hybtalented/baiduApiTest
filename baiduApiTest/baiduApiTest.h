#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_baiduApiTest.h"

class baiduApiTest : public QMainWindow
{
	Q_OBJECT

public:
	baiduApiTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::baiduApiTestClass ui;
};
