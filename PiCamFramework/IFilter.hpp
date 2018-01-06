//
//  IFilter.hpp
//  PiCam
//
//  Created by Siddhant Jain on 1/2/18.
//  Copyright © 2018 Siddhant Jain. All rights reserved.
//

#ifndef IFilter_hpp
#define IFilter_hpp

#include <stdio.h>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
class IFilter
{
public:
    virtual cv::Mat getFilteredFrame( cv::Mat& inFrame ) = 0 ;
};

#endif /* IFilter_hpp */
