/*
���ܣ������е�ɫ������
*/

#ifndef HCOLORAREA_H
#define HCOLORAREA_H

#include <QWidget>

class HColorArea : public QWidget
{
	Q_OBJECT

public:
	HColorArea(QWidget *parent);
	~HColorArea();
	void setHue(int);

protected:
	void paintEvent(QPaintEvent *);
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);

private:
	void createHuePixmap();			//����pixmap

signals:
	void hueChangedSignal(int);		//ɫ��ֵ�ı䷢���ź�

private:
	QPixmap m_huePixmap;
	double m_hue;
	int m_iHue;
	const int m_iColorHeight;	//��ɫ����ĸ߶�
	const int m_iColorWidth;	//��ɫ����Ŀ��
	const int topMargin = 7;
	const int rightMargin = 9;
};

#endif // HCOLORAREA_H
