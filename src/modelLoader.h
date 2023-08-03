#ifndef MODELLOADER_H
#define MODELLOADER_H

#include <dlib/dnn.h>
#include <string>

// Include the network architecture files for the models you plan to use
#include "shape_predictor.h"
#include <dlib/image_processing/frontal_face_detector.h>

using namespace dlib;

class ModelLoader {
public:
    // Constructor
    ModelLoader();

    // Load the face detection model
    void load_face_detector_model(const std::string& model_path);

    // Load the shape prediction model
    void load_shape_predictor_model(const std::string& model_path);

    // Load the emotion classification model
    void load_emotion_classifier_model(const std::string& model_path);

    // Get the models
    frontal_face_detector& get_face_detector();
    shape_predictor& get_shape_predictor();

private:
    frontal_face_detector face_detector;
    shape_predictor shape_predictor;
};

#endif // MODELLOADER_H
