//
//  main.cpp
//  OpenCVChapter2
//
//  Created by Boyang Zhang on 1/4/21.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// OpenCV includes
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

int main( int argc, const char** argv )
{
    // Read images
    Mat color= imread("/Users/boyangzhang/Documents/CodeInterview/C++/OpenCVChapter2/OpenCVChapter2/lena.jpg");
    Mat gray= imread("/Users/boyangzhang/Documents/CodeInterview/C++/OpenCVChapter2/OpenCVChapter2/lena.jpg", IMREAD_GRAYSCALE);
    
    if(! color.data ) // Check for invalid input
    {
        cout << "Could not open or find the image" << endl;
         return -1;
    }

    // Write images
    imwrite("lenaGray.jpg", gray);
    
    // Get same pixel with opencv function
    int myRow=color.cols-1;
    int myCol=color.rows-1;
    auto pixel= color.at<Vec3b>(myRow, myCol);
    cout << "Pixel value (B,G,R): (" << (int)pixel[0] << "," << (int)pixel[1] << "," << (int)pixel[2] << ")" << endl;
    
    // show images
    imshow("Lena BGR", color);
    imshow("Lena Gray", gray);
    // wait for any key press
    waitKey(0);
    return 0;
}
