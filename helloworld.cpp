//#include <stdio.h>
/*#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
	cvNamedWindow("Example2", CV_WINDOW_AUTOSIZE);
	CvCapture* capture;

	if (argc == 1) {
		capture = cvCreateCameraCapture(0);//默认摄像机编号
	}
	else {
		capture = cvCreateFileCapture(argv[1]);
	}
	assert(capture != NULL);
	IplImage* frame;
	while (1) {
		frame = cvQueryFrame(capture);
		if (!frame) break;
		cvShowImage("Example2", frame);
		char c = cvWaitKey(33);
		if (c == 27) break;
	}
	cvReleaseCapture(&capture);
	cvDestroyWindow("Example2");


 

    return 0;
}
*/
/*
#include<opencv2\opencv.hpp>
using namespace cv;
int main()
{
	Mat picture = imread("wallpaper.JPG");//图片必须添加到工程目录下
										  //也就是和test.cpp文件放在一个文件夹下！！！
	imshow("测试程序", picture);
	
	waitKey(20150901);
}
*/
/*
//图像缩放
//缩放图像文件  
//By MoreWindows (http://blog.csdn.net/MoreWindows)  
#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;
//隐藏控制台窗口  
//#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")
int main()
{
	const char *pstrImageName = "allpaper.JPG";
	const char *pstrSaveImageName = "allpaper.JPG";
	Mat picture = imread("wallpaper.JPG");//图片必须添加到工程目录下
	const char *pstrWindowsSrcTitle = "原图 ";
	const char *pstrWindowsDstTitle = "缩放图 ";

	double fScale = 0.314; //缩放倍数  
	CvSize czSize; //目标图像尺寸  

								//从文件中读取图像    
	IplImage *pSrcImage = cvLoadImage(pstrImageName, CV_LOAD_IMAGE_UNCHANGED);
	IplImage *pDstImage = NULL;

	//计算目标图像大小  
	czSize.width = pSrcImage->width * fScale;
	czSize.height = pSrcImage->height * fScale;

	//创建图像并缩放  
	pDstImage = cvCreateImage(czSize, pSrcImage->depth, pSrcImage->nChannels);
	cvResize(pSrcImage, pDstImage, CV_INTER_AREA);

	//创建窗口  
	cvNamedWindow(pstrWindowsSrcTitle, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(pstrWindowsDstTitle, CV_WINDOW_AUTOSIZE);

	//在指定窗口中显示图像  
	cvShowImage(pstrWindowsSrcTitle, pSrcImage);
	cvShowImage(pstrWindowsDstTitle, pDstImage);

	//等待按键事件  
	cvWaitKey();

	//保存图片  
	cvSaveImage(pstrSaveImageName, pDstImage);

	cvDestroyWindow(pstrWindowsSrcTitle);
	cvDestroyWindow(pstrWindowsDstTitle);
	cvReleaseImage(&pSrcImage);
	cvReleaseImage(&pDstImage);
	return 0;
}
*/
#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
	const char *pstrImageName = "allpaper.JPG";
	const char *pstrWindowsTitle = "OpenCV第一个程序(http://blog.csdn.net/MoreWindows)";

	//从文件中读取图像  
	IplImage *pImage = cvLoadImage(pstrImageName, CV_LOAD_IMAGE_UNCHANGED);

	//创建窗口  
	cvNamedWindow(pstrWindowsTitle, CV_WINDOW_AUTOSIZE);

	//在指定窗口中显示图像  
	cvShowImage(pstrWindowsTitle, pImage);

	//等待按键事件  
	cvWaitKey();

	cvDestroyWindow(pstrWindowsTitle);
	cvReleaseImage(&pImage);
	return 0;
}