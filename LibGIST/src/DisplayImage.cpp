#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core/utility.hpp"

#include "opencv2/highgui/highgui_c.h"

#include <stdio.h>
#include <fftw3.h>
using namespace std;
using namespace cv;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    int n=5;
    fftw_complex x[n];
    Mat image;
    image = imread( argv[1], 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    Mat cropped(image);
    cropped.convertTo(cropped, CV_32F);
    namedWindow("Display Image", CV_WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    cvtColor(cropped, cropped, CV_BGR2GRAY);

    waitKey(0);

    return 0;
}
