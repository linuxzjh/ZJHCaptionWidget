/*
���ܣ������еı��Ͷ�(S)������(V)����
	  ��С256 * 256
*/

#ifndef SVCOLORAREA_H
#define SVCOLORAREA_H

#include <QWidget>

class SVColorArea : public QWidget
{
	Q_OBJECT

public:
	SVColorArea(QWidget *parent);
	~SVColorArea();
	void setHue(int);
	void setSaturation(int);
	void setBrightness(int);
	void setHsv(int, int, int);
	void setColor(const QColor &);

protected:
	void paintEvent(QPaintEvent *);			//paint�¼�
	void mousePressEvent(QMouseEvent *);	//��갴���¼�
	void mouseMoveEvent(QMouseEvent *);		//����ƶ��¼�

private:
	void drawSVPixmap();
	void createVPixmap();	//�������Ƚ����pixmap
	void createSVPixmap();	//���������������pixmap
	void updateSVPixmap();	//���������������pixmap

public slots:
	void hueChangedSlot(int);

signals:
	void svChangedSignal(int, int, int);

private:
	int m_iHue;
	int m_iSaturation;
	int m_iBrightness;
	const int m_iAreaWidth;	//����������Ŀ��
	QPixmap m_svPixmap;	//�����������pixmap
	QPixmap m_vPixmap;	//���Ƚ����pixmap
};

#endif // SVCOLORAREA_H
