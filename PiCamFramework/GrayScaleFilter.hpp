//
//  GrayScaleFilter.hpp
//  PiCam
//
//  Created by Siddhant Jain on 1/2/18.
//  Copyright © 2018 Siddhant Jain. All rights reserved.
//

#ifndef GrayScaleFilter_hpp
#define GrayScaleFilter_hpp

#include "IFilter.hpp"

class GrayScaleFilter: public IFilter
{
public:
    Mat getFilteredFrame( Mat& inFrame );
};
#endif /* GrayScaleFilter_hpp */
