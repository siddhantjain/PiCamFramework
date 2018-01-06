//
//  PiCam.cpp
//  PiCam
//
//  Created by Siddhant Jain on 1/2/18.
//  Copyright © 2018 Siddhant Jain. All rights reserved.
//

#include <iostream>
#include "PiCam.hpp"
#include "PiCamPriv.hpp"

GrayScaleFilter& PiCam::getGrayScaleFilter()
{
    return m_grayScaleFilter;
};



