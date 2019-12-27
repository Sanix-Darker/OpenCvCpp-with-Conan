# OpenCvCpp with Conan

This is a sample project explaining how to use conan in a cpp with an external library such as openCv.

## Requirements

- python (3.x is recommended)
- pip
- C++11 (recommended)
- Conan

## Ho to test this project

#### First, To install pre-requirements

Just run: `sh ./install.sh`
What is done behind the scene:

```shell
pip install conan
```

#### Second, you need to configure your `conanfile.txt` like this sample:

Sample content :

```txt
[requires]
opencv/2.4.13.5@conan/stable

[generators]
cmake
```

you can also do a `conan search your-lib -remote=conan-center` and then select in the list what you want to use


#### Third, add to your `CMakeLists.txt`, conan-packages as follow:

The content of the file :
```txt
cmake_minimum_required(VERSION 2.8.12)
project(OpencvCam)

add_definitions("-std=c++11")

include("./build/conanbuildinfo.cmake") # Don't orget this line to specify the conan libs path
conan_basic_setup()

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
```

Now, we are set-up and we can build our sample app for streaming the camera of our laptop : 


#### Four, we check up our code :


Sample code for openCv:

```cpp
#include <iostream>
#include "opencv2/opencv.hpp"

int main(int, char**)
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

    while(1)
    {
        // Get a new frame from camera
        cap >> frame;

        // Show the frame
        cv::imshow("video", frame);

        // Exit
        if(cv::waitKey(30) >= 0) break;
    }

    return 0;
}
```

#### Five, we can now build it

Just run: `sh ./build.sh`
What is done behind the scene:

```shell
rm -rf build
mkdir build && cd build
conan install ..
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

Some files will be added in `./build` + the portable of our application in `./build/bin` :-)


#### Six, we can run our application :

Just run: `sh ./start.sh`
What is done behind the scene:

```shell
./build/bin/OpencvCam
```


#### Seven, or you can do all theese steps

Just run `sh ./install_build_start.sh`
What is done behind the scene:

```shell
sh ./install.sh
sh ./build.sh
sh ./start.sh
```

## Author

- Sanix-darker
