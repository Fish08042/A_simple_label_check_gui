#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <math.h>
#include <sstream>
#include<string>
#include <QMenu>
#include <QContextMenuEvent>
#include <QStyleOption>
#include <QPainter>
#include <QFileDialog>

#include "segmentation.h"
#include "split.h"
#include "getFiles.h"
using namespace std;
using namespace cv;

segmentation::segmentation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	folder_save_str = " ";
	folder_open_str = " ";
}

segmentation::~segmentation()
{

}

void segmentation::on_OpenFig_clicked()
{
	
	folder = QFileDialog::getExistingDirectory(this,"CheckFig_folder","./");
	

	if (folder.isEmpty())
	{
		return;
	}
	else
	{
		folder_open_str = folder.toStdString();
		getFiles(folder_open_str, filenames);  
		progress_index=0; 
		height2=1500;
		width2=1500;
		show_all(height2,width2);
	}
}
 
void segmentation::on_SaveFig_clicked()
{

	folder_save = QFileDialog::getExistingDirectory(this,"SaveFig_folder","./");
	if (folder.isEmpty())
	{
		return;
	}
	else
	{
		folder_save_str = folder_save.toStdString();
	}
}
 


void segmentation::on_page_up_clicked()
{
	while(folder_open_str==" ")
	{
		on_OpenFig_clicked();
	}
	
	progress_index = progress_index - 1;
	if(progress_index <0){progress_index = progress_index+1;}
	

	str_temp ="";
	display= new char[str_temp.size() + 1];
	std::copy(str_temp.begin(), str_temp.end(), display);
	display[str_temp.size()] = '\0'; 
	ui.save_result_2->setText(QApplication::translate("segmentationClass", display, 0));
	
	height2=1500;
	width2=1500;
	show_all(height2,width2);
}

void segmentation::go_to()
{

	while(folder_open_str==" ")
	{
		on_OpenFig_clicked();
	}
	
	int a = ui.spinBox->value();  
	progress_index = a - 1;
	if(progress_index <0){progress_index = 0;}
	if(progress_index >=filenames.size()){progress_index = filenames.size()-1;}
	height2=1500;
	width2=1500;
	str_temp ="";
	display= new char[str_temp.size() + 1];
	std::copy(str_temp.begin(), str_temp.end(), display);
	display[str_temp.size()] = '\0'; 
	ui.save_result_2->setText(QApplication::translate("segmentationClass", display, 0));
	show_all(height2,width2);
}


void segmentation::on_page_down_clicked()
{
	while(folder_open_str==" ")
	{
		on_OpenFig_clicked();
	}
	
	progress_index = progress_index + 1;
	if(progress_index >=filenames.size()){progress_index = progress_index-1;}
	height2=1500;
	width2=1500;

	str_temp ="";
	display= new char[str_temp.size() + 1];
	std::copy(str_temp.begin(), str_temp.end(), display);
	display[str_temp.size()] = '\0'; 
	ui.save_result_2->setText(QApplication::translate("segmentationClass", display, 0));

	show_all(height2,width2);
}

void segmentation::on_check_clicked()
{
	while(folder_open_str==" ")
	{
		on_OpenFig_clicked();
	}
	while(folder_save_str==" ")
	{
		on_SaveFig_clicked();
	}

	filename_str = filenames[progress_index];	
	string path_save = filename_str;
	string::size_type   pos(0);     
	pos = path_save.find(folder_open_str);
	path_save.replace(pos,folder_open_str.length(),folder_save_str);  
	image = imread(filename_str);
	imwrite(path_save,image);

	str_temp ="SAVE TO->\n"+ path_save;
	display= new char[str_temp.size() + 1];
	std::copy(str_temp.begin(), str_temp.end(), display);
	display[str_temp.size()] = '\0'; 
	ui.save_result_2->setText(QApplication::translate("segmentationClass", display, 0));
}


void segmentation::show_all(int height2,int width2)
{
	filename_str = filenames[progress_index];	
	image = imread(filename_str);
	cvtColor(image, image, CV_BGR2RGB);

	str_temp =itos(progress_index+1)+"/"+itos(filenames.size());
	display= new char[str_temp.size() + 1];
	std::copy(str_temp.begin(), str_temp.end(), display);
	display[str_temp.size()] = '\0'; 
	ui.index->setText(QApplication::translate("segmentationClass", display, 0));

	str_temp =filename_str;
	display= new char[str_temp.size() + 1];
	std::copy(str_temp.begin(), str_temp.end(), display);
	display[str_temp.size()] = '\0'; 
	ui.save_result->setText(QApplication::translate("segmentationClass", display, 0));

	string s = filename_str;
    vector<string> result;
    string sep = "__";
    split(s,result,sep, -1);

	str_temp =result[result.size()-9];
	display= new char[str_temp.size() + 1];
	std::copy(str_temp.begin(), str_temp.end(), display);
	display[str_temp.size()] = '\0'; 
	ui.doctor_answer->setText(QApplication::translate("segmentationClass", display, 0));
	
	
	cv::resize(image, image1, Size(500,500));
	img1 = QImage((const unsigned char*)(image1.data), image1.cols, image1.rows, image1.step, QImage::Format_RGB888);
	label1 = new QLabel();//label = new QLabel(this) 实列化在当前窗口
	label1->setPixmap(QPixmap::fromImage(img1));
	label1->resize(QSize(img1.width(), img1.height()));
	ui.scrollArea->setWidget(label1);

	cv::resize(image, image2, Size(height2,width2));
	img2 = QImage((const unsigned char*)(image2.data), image2.cols, image2.rows, image2.step, QImage::Format_RGB888);
	label2 = new QLabel();//label = new QLabel(this) 实列化在当前窗口
	label2->setAlignment(Qt::AlignCenter);
	label2->setPixmap(QPixmap::fromImage(img2));
	label2->resize(QSize(img2.width(), img2.height()));
	ui.scrollArea_2->setWidget(label2);

	cv::resize(image, image3, Size(1500,1500));
	m_select3 = Rect(500,500,500,500);
	image3 = image3(m_select3);
	img3 = QImage((const unsigned char*)(image3.data), image3.cols, image3.rows, image3.step, QImage::Format_RGB888);
	label3 = new QLabel();//label = new QLabel(this) 实列化在当前窗口
	label3->setAlignment(Qt::AlignCenter);
	label3->setPixmap(QPixmap::fromImage(img3));
	label3->resize(QSize(img3.width(), img3.height()));
	ui.scrollArea_3->setWidget(label3);
}

void segmentation::on_small_clicked()
{
	while(folder_open_str==" ")
	{
		on_OpenFig_clicked();
	}
	
	height2=int(height2/1.5);
	width2=int(width2/1.5);
	show_all(height2,width2);
}

void segmentation::on_big_clicked()
{
	while(folder_open_str==" ")
	{
		on_OpenFig_clicked();
	}
	
	height2=int(height2*1.5);
	width2=int(width2*1.5);
	show_all(height2,width2);
}


string segmentation::itos(int i) // 将int 转换成string
{
    stringstream s;
    s << i;
    return s.str();
}