#include <opencv2/opencv.hpp>

#include <iostream>

int main(){
    cv::VideoCapture cap(2);
    if (!cap.isOpened()) {
        std::cerr << "cap is not opened\n";
	return -1;
    }
    cv::namedWindow("row_img", cv::WINDOW_NORMAL);
    cv::Mat row_img;
    for(;;){
        cap>>row_img;
	cv::imshow("row_img", row_img);
	auto key = cv::waitKey(1);// ? ms 誤差大
	if (key == 'q') {
	    break;
	}
    }
    cv::imwrite("camera.png",row_img);
    cv::destroyAllWindows();
}
