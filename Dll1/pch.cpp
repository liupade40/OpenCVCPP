#include "pch.h"
#include <iostream>
#include <windows.h>
#include <opencv2/opencv.hpp> 
using namespace cv;
//C++封装C格式代码
HEAD void CallingConvention Test1(const char* path, int flags)
{
	Mat image = imread(path, flags);
	imshow("Show Window", image);
	waitKey(0);
	printf("call success\n");
}
