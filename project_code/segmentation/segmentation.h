#ifndef SEGMENTATION_H
#define SEGMENTATION_H

#include <QtWidgets/QMainWindow>
#include "ui_segmentation.h"
#include <QWidget>
#include <QImage>
#include <QtWidgets/QMainWindow>
#include<QGraphicsScene>  
#include<QGraphicsView>                  
#include<opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>  
#include <qfiledialog.h>                
#include <qlabel.h>  

using namespace cv;
using namespace std;

class segmentation : public QMainWindow
{
	Q_OBJECT

public:
	segmentation(QWidget *parent = 0);
	~segmentation();
	
	QString folder;
	QString folder_save;
	vector<std::string> filenames;//用来存储文件名列表
	string filename_str;
	string str_temp;
	string folder_save_str;
	string folder_open_str;
	QString filename;
	
	int progress_index; 


private slots:
	void on_OpenFig_clicked();    
	void on_SaveFig_clicked();
	void on_page_up_clicked();
	void on_page_down_clicked();
	void on_check_clicked();
	void on_big_clicked();
	void on_small_clicked();
	void show_all(int,int);
	string itos(int i);
	void go_to();
private:

	Ui::segmentationClass ui;

	Mat image;
	Mat image1;
	Mat image2;
	Mat image3;
	Mat result;

	Rect m_select3;
	QImage img1;
	QImage img2;
	QImage img3;

	int height2;
	int width2;

	char * display;

	QLabel *label1;
	QLabel *label2;
	QLabel *label3;
};

#endif // SEGMENTATION_H
