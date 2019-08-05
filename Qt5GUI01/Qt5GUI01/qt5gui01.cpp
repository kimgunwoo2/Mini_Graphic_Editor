#include <QPainter>
#include <QMoveEvent>
#include <QKeyEvent>

#include "qt5gui01.h"
#include "shapes.h"
#include <vector>

void Qt5GUI01::keyPressEvent(QKeyEvent *event) {
	x3_ = 0;
	y3_ = 0;
	y4_ = 0;
	x4_ = 0;
	if (event->key() == Qt::Key_Right)
		for (int i = 0; i < r.size(); i++) {
				r[i]->Move(5,0);
				repaint();
	}if (event->key() == Qt::Key_Left)
		for (int i = 0; i < r.size(); i++) {
			r[i]->Move(-5, 0);
			repaint();
		}
	if (event->key() == Qt::Key_Up)
		for (int i = 0; i < r.size(); i++) {
			r[i]->Move(0, -5);
			repaint();
		}
	if (event->key() == Qt::Key_Down)
		for (int i = 0; i < r.size(); i++) {
			r[i]->Move(0, 5);
			repaint();
		}


}
void Qt5GUI01::mousePressEvent(QMouseEvent *event)
{
	x3_ = event->x();
	y3_ = event->y();
}
void Qt5GUI01::mouseMoveEvent(QMouseEvent *event)
{
	x4_ = event->x();
	y4_ = event->y();
	repaint();

}
void Qt5GUI01::mouseReleaseEvent(QMouseEvent *event) {
	QPainter qp(this);
	if (shape_ == 1) {
		Line *a = new Line(x3_, y3_, x4_, y4_, color1);
		r.push_back(a);
	}
	else if (shape_ == 2) {
		Rect *a = new Rect(x3_, y3_, x4_, y4_, color1);
		r.push_back(a);
	}
	else if (shape_ == 3) {
		Ellipse *a = new Ellipse(x3_, y3_, x4_, y4_, color1);
		r.push_back(a);
		}
	}
void Qt5GUI01::paintEvent(QPaintEvent *event)
{
	Q_UNUSED(event);
	QPainter qp(this); 
	if (ui.radioButton_4->isChecked())
				color1 = "blue";
		else if (ui.radioButton_5->isChecked())
				color1 = "green";
		else if (ui.radioButton_6->isChecked())
				color1 = "white";
		else if (ui.radioButton_7->isChecked())
				color1 = "black";
		else  if(ui.radioButton_8->isChecked())
				color1 = "red";
	if (shape_==1) {
			
			Line a(x3_, y3_, x4_, y4_, color1);
			a.Draw(qp);
			
		}
		else if (shape_==2) {
			Rect a(x3_, y3_, x4_, y4_, color1);
			a.Draw(qp);
			}	
		else if(shape_==3){
			Ellipse a(x3_, y3_, x4_, y4_, color1);
			a.Draw(qp);
				}
		for (int i = 0; i<r.size(); i++) {
			r[i]->Draw(qp);
		}
					
					
		
		
}

void Qt5GUI01::ChangeShape(int shape)  // 모양 변경
{
	shape_ = shape;
	                  
}


Qt5GUI01::Qt5GUI01(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this); 
	shape_ = 1;
	ui.radioButton->setChecked(1);
	ui.radioButton_7->setChecked(1);
	connect(ui.radioButton, &QRadioButton::clicked, this, [=]() {ChangeShape(1); });
	connect(ui.radioButton_2, &QRadioButton::clicked, this, [=]() {ChangeShape(2); });
	connect(ui.radioButton_3, &QRadioButton::clicked, this, [=]() {ChangeShape(3); });
}

Qt5GUI01::~Qt5GUI01()
{
	
}
