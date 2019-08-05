#ifndef QT5GUI01_H
#define QT5GUI01_H
#include <QPainter>
#include <QMoveEvent>
#include <vector>
#include <iostream>
#include <QtWidgets/QWidget>
#include "ui_qt5gui01.h"
#include "shapes.h"
using namespace std;

class Qt5GUI01 : public QWidget
{
	Q_OBJECT

public:
	Qt5GUI01(QWidget *parent = 0);
	~Qt5GUI01();


protected:
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void keyPressEvent(QKeyEvent *event);
	void paintEvent(QPaintEvent *event);
	void ChangeShape(int shape);


	
private:
	Ui::Qt5GUI01Class ui;
	vector<Shape*> r;
	int shape_;
	char* color1 = "";
	int x3_;
	int y3_;
	int x4_ ;
	int y4_ ;
};


#endif // QT5GUI01_H
