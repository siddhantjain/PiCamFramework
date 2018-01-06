//
//  PiCamFramework.cpp
//  PiCamFramework
//
//  Created by Siddhant Jain on 1/5/18.
//  Copyright © 2018 Siddhant Jain. All rights reserved.
//

#include <iostream>
#include "PiCamFramework.hpp"
#include "PiCamFrameworkPriv.hpp"

GrayScaleFilter& PiCamFramework::GetGrayScaleFilter()
{
    return m_grayScaleFilter;
};


