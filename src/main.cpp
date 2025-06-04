#include <iostream>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp> // 包含 OpenCV 核心头文件

int main() {
  std::cout << "Hello, OpenCV from CMake and VS Code!" << std::endl;

  // 创建一个简单的白色图像
  cv::Mat image(200, 300, CV_8UC3, cv::Scalar(255, 255, 255));

  // 在图像中心绘制一个红色的圆
  cv::circle(image, cv::Point(150, 100), 50, cv::Scalar(0, 0, 255), -1);

  cv::Mat grayImage;
  // 降噪
  cv::bilateralFilter(image, grayImage, cv::Size(5, 5), 0);

  // 显示图像
  cv::imshow("My OpenCV Window", image);
  cv::waitKey(0); // 等待按键
  cv::destroyAllWindows();

  return 0;
}