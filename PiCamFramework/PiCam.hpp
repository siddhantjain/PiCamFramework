//
//  PiCam.hpp
//  PiCam
//
//  Created by Siddhant Jain on 1/2/18.
//  Copyright © 2018 Siddhant Jain. All rights reserved.
//

#ifndef PiCam_
#define PiCam_

/* The classes below are exported */
#pragma GCC visibility push(default)
#include "IFilter.hpp"
#include "GrayScaleFilter.hpp"

class PiCam
{
    public:
    GrayScaleFilter& getGrayScaleFilter();
    
    private:
    //siddhant: May be the class should create and destroy filters as and when needed.
    //For now keeping this to iron out other issues with using this as a library
    static GrayScaleFilter m_grayScaleFilter;
};

#pragma GCC visibility pop
#endif
