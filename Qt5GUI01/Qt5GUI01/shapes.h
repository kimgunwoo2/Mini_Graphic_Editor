#pragma once
#ifndef __SHAPES__
#define __SHAPES__

#include <QtWidgets/QWidget>
#include <QPainter>

enum SHAPE
{
	LINE = 1,
	RECT = 2,
	ELLIPSE = 3
};

class Shape
{
public:
	Shape(int x1, int y1, int x2, int y2, QColor color) : x1_(x1), y1_(y1), x2_(x2), y2_(y2), color_(color) {}
	virtual void Draw(QPainter &qp) = 0;
	void SetPen(QPainter &qp)
	{
		QPen pen(color_, 2, Qt::SolidLine);   // Ææ ¸ð¾ç ¼³Á¤
		qp.setPen(pen);                         // Ææ ¸ð¾ç Àû¿ë
	}
	void Move(int x, int y) { x1_ += x; y1_ += y; x2_ += x; y2_ += y; }

public:
	int x1_, y1_;
	int x2_, y2_;
	QColor color_;
};

class Line : public Shape
{
public:
	Line(int x1, int y1, int x2, int y2, QColor color) : Shape(x1, y1, x2, y2, color) {}
	void Draw(QPainter &qp)
	{
		SetPen(qp);
		qp.drawLine(x1_, y1_, x2_, y2_);
	}
};

class Rect : public Shape
{
public:
	Rect(int x1=0, int y1=0, int x2=0, int y2=0, QColor color="black") : Shape(x1, y1, x2, y2, color) {}
	void Draw(QPainter &qp)
	{
		SetPen(qp);
		qp.drawRect(x1_, y1_, x2_ - x1_, y2_ - y1_);
	}
};

class Ellipse : public Shape
{
public:
	Ellipse(int x1, int y1, int x2, int y2, QColor color) : Shape(x1, y1, x2, y2, color) {}
	void Draw(QPainter &qp)
	{
		SetPen(qp);
		qp.drawEllipse(x1_, y1_, x2_ - x1_, y2_ - y1_);
	}
};

#endif