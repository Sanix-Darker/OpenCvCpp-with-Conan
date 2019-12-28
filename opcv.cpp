#include "opcv.hpp" 

void printt(std::string strr)
{
    std::cout << "Working Fine!" << std::endl;
    std::cout << "You said : " << strr;
}

int test_cam()
{
    // Open default camera
    cv::VideoCapture cap(0);

    // Camera working?
    if(!cap.isOpened()) {
        std::cout << "Fix your camera!" << std::endl;
        return -1;
    }

    cv::Mat frame;
    cv::namedWindow("video", cv::WINDOW_AUTOSIZE);

    startLoop(cap, frame);

    return 0;
}

void startLoop(cv::VideoCapture cap, cv::Mat frame)
{

    while(1)
    {
        // Get a new frame from camera
        cap >> frame;

        // Show the frame
        cv::imshow("video", frame);

        // Exit
        if(cv::waitKey(30) >= 0) break;
    }
}
