
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
int main(int argc, const char * argv[]) {
    //cv::Mat testImg(100,100,CV_8UC1,cv::Scalar(128));
    cv::Mat testImg = cv::imread("/Users/anmiv/Documents/wallpapers/IMG_9028.JPG",-1);
    cv::namedWindow("test",cv::WINDOW_NORMAL);
    cv::imshow("test",testImg);
    cv::waitKey(0);

    return 0;
}
