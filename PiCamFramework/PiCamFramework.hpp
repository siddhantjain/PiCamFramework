//
//  PiCamFramework.hpp
//  PiCamFramework
//
//  Created by Siddhant Jain on 1/5/18.
//  Copyright © 2018 Siddhant Jain. All rights reserved.
//

#ifndef PiCamFramework_
#define PiCamFramework_

/* The classes below are exported */
#pragma GCC visibility push(default)

#include "GrayScaleFilter.hpp"

class PiCamFramework
{
    public:
        GrayScaleFilter& GetGrayScaleFilter();
    
    private:
        //siddhant: May be the class should create and destroy filters as and when needed.
        //For now keeping this to iron out other issues with using this as a library
        GrayScaleFilter m_grayScaleFilter;
};

#pragma GCC visibility pop
#endif
