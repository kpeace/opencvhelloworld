#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat img(512, 512, CV_8UC3, cv::Scalar(0));
	cv::String greating = "hello, OpenCV on Jetson";

	cv::putText(img,
		greating,
		cv::Point(10, img.rows /2),
		cv::FONT_HERSHEY_DUPLEX,
		1.0,
		CV_RGB(118, 185, 0));

	cv::imshow("Hello!", img);
	cv::waitKey();
	return 0;
}

