#ifndef OPCV_HPP
#define OPCV_HPP

#include <iostream>
#include <opencv2/opencv.hpp>

void printt(std::string strr);
void startLoop(cv::VideoCapture cap, cv::Mat frame);
int test_cam();

#endif