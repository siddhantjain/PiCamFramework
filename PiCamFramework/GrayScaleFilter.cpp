//
//  GrayScaleFilter.cpp
//  PiCam
//
//  Created by Siddhant Jain on 1/2/18.
//  Copyright © 2018 Siddhant Jain. All rights reserved.
//

#include "GrayScaleFilter.hpp"

using namespace cv;
Mat GrayScaleFilter::getFilteredFrame(Mat& inFrame)
{
    Mat outFrame;
    cvtColor(inFrame, outFrame, CV_RGB2GRAY);
    return outFrame;
}
