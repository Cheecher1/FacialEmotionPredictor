// ImageProcessor.h

#include <dlib/dnn.h>
#include <dlib/image_processing/full_object_detection.h>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace dlib;

class ImageProcessor{
    net_type net;
public:
    ImageProcessor(const net_type & model);
    vector<mmod_rect> detect_objects(const cv::Mat& image);
};