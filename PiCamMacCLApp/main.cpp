#include <iostream>
#include "PiCamFramework.hpp"

using namespace cv;
int main(int argc, const char * argv[]) {
    VideoCapture cap;
    // open the default camera, use something different from 0 otherwise;
    // Check VideoCapture documentation.
    if(!cap.open(0))
        return 0;
    Mat frame;
    PiCamFramework::PiCamFramework piCamera;
    GrayScaleFilter gFilter = piCamera.GetGrayScaleFilter();
    //-- 1. Load the cascades
    //if( !face_cascade.load( face_cascade_name ) ){ printf("--(!)Error loading\n"); return -1; };
    //if( !eyes_cascade.load( eyes_cascade_name ) ){ printf("--(!)Error loading\n"); return -1; };
    
    //-- 2. Read the video stream
    
    while( true )
    {
        cap >> frame;
        
        //-- 3. Apply the classifier to the frame
        if( !frame.empty() )
        { imshow("time pass",gFilter.getFilteredFrame(frame)); }
        else
        { printf(" --(!) No captured frame -- Break!"); break; }
        
        int c = waitKey(10);
        if( (char)c == 'c' ) { break; }
    }
    
    
    return 0;
}

