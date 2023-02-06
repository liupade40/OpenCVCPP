#include "opencv.h" 
#include <opencv2/opencv.hpp> 
#include <string.h>  
#include <vcclr.h>
using namespace cv;
using namespace test;
bool To_CharStar(System::String^ source, char*& target)
{
    pin_ptr<const wchar_t> wch = PtrToStringChars(source);
    int len = ((source->Length + 1) * 2);
    target = new char[len];
    return wcstombs(target, wch, len) != -1;
}
void test::opencv::opencvimshow(System::String^ path, int flags)
{  
    pin_ptr<const wchar_t> wcName = PtrToStringChars(path);
    char* p;
    To_CharStar(path, p);
    Mat image = imread(p, flags);
    imshow("Show Window", image);
    waitKey(0);
}

 